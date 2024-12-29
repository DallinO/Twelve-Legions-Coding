#include "vehicles.h"
#include <iostream>

int main()
{
	int num = 42;
	int* ptr = &num;

	std::cout << "Num  : " << num << std::endl;
	std::cout << "Num &: " << &num << std::endl;
	std::cout << "ptr  : " << ptr << std::endl;
	std::cout << "ptr *: " << *ptr << std::endl;
	std::cout << "ptr &: " << &ptr << std::endl;
}