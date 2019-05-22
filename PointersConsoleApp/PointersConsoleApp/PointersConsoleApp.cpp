// PointersConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int val = 1;
int val2 = 2;
int* valPtr = &val;
int& valRef = val;


void PrintVals() {
	std::cout << "Values : " << std::endl;
	std::cout << "val: " << val << " val2: " << val2 << " valPtr: " << *valPtr << " valRef : " << valRef << std::endl;
	std::cout << "Address : " << std::endl;
	std::cout << "val: " << &val << " val2: " << &val2 << " valPtr: " << valPtr << " valRef : " << &valRef << std::endl;
}


int main()
{
	PrintVals();
	valPtr = &val2;
	PrintVals();
	*valPtr = 3;
	PrintVals();
	valRef = 4;
	PrintVals();
	return 0;
}