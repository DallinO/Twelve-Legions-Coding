#pragma once

#include <cassert>
#include <new>
#include <memory>

namespace custom
{
    template <typename T, typename A = std::allocator<T>>
    class vector
    {
    public:
        vector(const A &a = A());
        vector(size_t numElements, const A &a = A());
        vector(size_t numElements, const T &t, const A &a = A());
        vector(const std::initializer_list<T> &l, const A &a = A());
        vector(const vector &rhs);
        vector(vector &&rhs);
        ~vector();

        class iterator;
        iterator begin();
        iterator end();

        T &front();
        const T &front() const;
        T &back();
        const T &back() const;

        void swap(vector &rhs);
        void push_back(const T &t);
        void push_back(T &&t);
        void reserve(size_t newCapacity);
        void resize(size_t newElements);
        void resize(size_t newElements, const T &t);
        void clear();
        void pop_back();
        void shrink_to_fit();
        size_t size() const { return numElements; }
        size_t capacity() const { return numCapacity; }
        bool empty() const { return numElements == 0; }

        T &operator[](size_t index);
        const T &operator[](size_t index) const;
        vector &operator=(const vector &rhs);
        vector &operator=(vector &&rhs);

    private:
        A alloc;
        T *data;
        size_t numCapacity;
        size_t numElements;
    };

    template <typename T, typename A>
    class vector<T, A>::iterator
    {
    private:
        T *p;

    public:
        iterator() : p(nullptr) {}
        iterator(T *p) : p(p) {}
        iterator(const iterator &rhs) : p(rhs.p) {}
        iterator(size_t index, vector<T> &v) : p(&v.data[index]) {}

        iterator &operator=(const iterator &rhs)
        {
            p = rhs.p;
            return *this;
        }
        bool operator!=(const iterator &rhs) const { return p != rhs.p; }
        bool operator==(const iterator &rhs) const { return p == rhs.p; }
        T &operator*() { return *p; }
        iterator &operator++()
        {
            ++p;
            return *this;
        }
        iterator operator++(int postfix)
        {
            iterator tmp(*this);
            ++(*this);
            return tmp;
        }
        iterator &operator--()
        {
            --p;
            return *this;
        }
        iterator operator--(int postfix)
        {
            iterator tmp(*this);
            --(*this);
            return tmp;
        }
    };

}