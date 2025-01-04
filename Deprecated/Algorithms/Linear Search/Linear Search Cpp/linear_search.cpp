#include <vector>
#include <iostream>
#include <limits>
#include "linear_search.h"

using namespace std;

template <typename T>
int BasicLinearSearch(const std::vector<T>& data, const T& target)
{
    for (size_t i = 0; i < data.size(); i++)
    {
        if (data[i] == target)
            return i;
    }

    return -1;
}


template <typename T>
T BasicLinearSearchV2(const std::vector<T>& data, const T& target)
{
    for (auto it = data.begin(); it != data.end(); ++it)
    {
        if (*it == target)
            return *it;
    }

    return T{};
}


template <typename T>
int RecursiveLinearSearch(const std::vector<T>& data, const T& target, int index = 0)
{
    if (index >= static_cast<int>(data.size()))
        return -1;
    
    if (data[index] == target)
        return index;

    return RecursiveLinearSearch(data, target, index + 1)
}


template <typename T>
size_t RecursiveLinearSearchV2(const std::vector<T>& data, const T& target, size_t index = 0)
{
    if (index >= data.size())
        return numeric_limits<size_t>::max();
    
    if (data[index] == target)
        return index;

    return RecursiveLinearSearch(data, target, index + 1)
}