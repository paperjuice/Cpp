// Debugging.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>



void Test(int a)
{
	std::cout << a;
}

int main()
{
	int a;

	a = static_cast<float>(4.9);
	Test(static_cast<int>(4.7));
    return 0;
}

