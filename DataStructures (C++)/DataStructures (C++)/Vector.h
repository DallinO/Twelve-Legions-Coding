#pragma once

namespace Custom
{
	template<typename T>
	class Vector
	{
	public:
		Vector();
		Vector(size_t size);
		Vector(size_t size, const T& value);
		Vector(const Vector<T>& rhs);
		Vector(Vector<T>&& rhs) noexcept;
		~Vector();

		Vector& operator = (const Vector& rhs)
		{
			if (this != &rhs)
			{

				T* newData = new T[rhs._size];

				for (size_t i = 0; i < rhs._size; ++i)
				{
					_data[i] = rhs._data[i];
				}

				delete[] _data;
				_data = newData;
				_size = rhs._size;
				_capacity = rhs._capacity;
			}
			return *this;
		}

		bool operator == (const Vector& rhs) const
		{
			if (_size != rhs._size)
				return false;
			for (size_t i = 0; i < _size; ++i)
			{
				if (_data[i] != rhs._data[i])
					return false;
			}

			return true;
		}
		
		bool operator != (const Vector& rhs) const
		{
			return !(*this == rhs);
		}

		size_t size() { return _size; }
		size_t capacity() { return _capacity; }

	private:
		T* _data;
		size_t _size;
		size_t _capacity;
	};

	template<typename T>
	class Iterator
	{
	public:

	private:
		T* p
	};

	/***********************************
	* DEFUALT CONSTRUCTOR
	***********************************/
	template<typename T>
	inline Vector<T>::Vector()
	{
		_data = nullptr;
		_size = 0;
		_capacity = 0;
	}


	/***********************************
	* CONSTRUCTOR /W CAPACITY
	***********************************/
	template<typename T>
	inline Vector<T>::Vector(size_t size)
	{
		_data = new T[size];
		_size = size;
		_capacity = size;
	}


	/***********************************
	* CONSTRUCTOR /W SIZE & VALUE
	***********************************/
	template<typename T>
	inline Vector<T>::Vector(size_t size, const T& value)
	{
		_data = new T[size];
		_size = size;
		_capacity = size;

		for (size_t i = 0; i < size; ++i)
		{
			_data[i] = value;
		}
	}


	/***********************************
	* COPY CONSTRUCTOR
	***********************************/
	template<typename T>
	inline Vector<T>::Vector(const Vector<T>& rhs)
	{
		_data = new T[rhs._capacity];
		_size = rhs.size;
		_capacity = rhs._capacity;

		for (size_t i = 0; i < rhs._size; ++i)
		{
			_data[i] = rhs._data[i];
		}
	}


	/***********************************
	* MOVE CONSTRUCTOR
	***********************************/
	template<typename T>
	inline Vector<T>::Vector(Vector<T>&& rhs) noexcept
	{
		_data = rhs._data;
		_size = rhs._size;
		_capacity = rhs._capacity;

		rhs._data = nullptr;
		rhs._size = 0;
		rhs._capacity = 0;
	}

	template<typename T>
	inline Vector<T>::~Vector()
	{
		delete[] _data;
		_data = nullptr;
	}
}