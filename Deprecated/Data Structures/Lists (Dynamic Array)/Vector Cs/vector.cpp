#include "vector.h"
#include <cassert>
#include <new>
#include <memory>

using namespace custom;

template <typename T, typename A>
vector<T, A>::vector(const A &a) : alloc(a), data(nullptr), numCapacity(0), numElements(0) {}

template <typename T, typename A>
vector<T, A>::vector(size_t numElements, const A &a) : alloc(a), data(nullptr), numCapacity(numElements), numElements(numElements)
{
    data = alloc.allocate(numCapacity);
    for (size_t i = 0; i < numElements; ++i)
        alloc.construct(&data[i]);
}

template <typename T, typename A>
vector<T, A>::vector(size_t numElements, const T &t, const A &a) : alloc(a), data(nullptr), numCapacity(numElements), numElements(numElements)
{
    data = alloc.allocate(numCapacity);
    for (size_t i = 0; i < numElements; ++i)
        alloc.construct(&data[i], t);
}

template <typename T, typename A>
vector<T, A>::vector(const std::initializer_list<T> &l, const A &a) : alloc(a), data(nullptr), numCapacity(l.size()), numElements(l.size())
{
    data = alloc.allocate(numCapacity);
    std::copy(l.begin(), l.end(), data);
}

template <typename T, typename A>
vector<T, A>::vector(const vector &rhs) : alloc(rhs.alloc), data(nullptr), numCapacity(rhs.numCapacity), numElements(rhs.numElements)
{
    data = alloc.allocate(numCapacity);
    std::copy(rhs.data, rhs.data + numElements, data);
}

template <typename T, typename A>
vector<T, A>::vector(vector &&rhs) : alloc(std::move(rhs.alloc)), data(rhs.data), numCapacity(rhs.numCapacity), numElements(rhs.numElements)
{
    rhs.data = nullptr;
    rhs.numCapacity = rhs.numElements = 0;
}

template <typename T, typename A>
vector<T, A>::~vector()
{
    if (data)
    {
        for (size_t i = 0; i < numElements; ++i)
            alloc.destroy(&data[i]);
        alloc.deallocate(data, numCapacity);
    }
}

template <typename T, typename A>
std::iterator vector<T, A>::begin()
{
    return iterator(empty() ? &data[0] : nullptr);
}

template <typename T, typename A>
iterator vector<T, A>::end()
{
    return iterator(empty() ? &data[numElements] : nullptr);
}