#include <iostream>
#include <cassert>
#include "Vector.h"

#define _CRTDBG_MAP_ALLOC

void testDefualtConstructor()
{
	{
		Custom::Vector<int> vec;
		assert(vec.size() == 0);
		assert(vec.capacity() == 0);
		std::cout << "Default constructor test passed.\n";
	}

	_CrtDumpMemoryLeaks();

	{
		Custom::Vector<int> vec(10);
		assert(vec.size() == 10);
		assert(vec.capacity() == 10);
		std::cout << "Default constructor test passed.\n";
	}

	_CrtDumpMemoryLeaks();
}

int main()
{
	testDefualtConstructor();
}