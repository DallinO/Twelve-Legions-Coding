#pragma once
#include <vector>

class LinearSearch
{
public:
    template <typename T> 
    int BasicLinearSearch(const std::vector<T>& data, const T& target); 

    template <typename T>
    T BasicLinearSearchV2(const std::vector<T>& data, const T& target);

    template <typename T> 
    int RecursiveLinearSearch(const std::vector<T>& data, const T& target, int index); 
};