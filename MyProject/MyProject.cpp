// MyProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "test" <<std::endl;
	int a =0 , b=0;
	std::cin >> a >> b;
	std::cout << a << " * " << b << " = " << a*b << std::endl;

	std::cout << "the sum of " << a;
	std::cout << " and " << b;
	std::cout << " is " << a + b << std::endl;

	std::cout<< "/*";
	std::cout<< "*/";
	std::cout<< /* "*/" */";
	std::cout<< /*"*/"/* "/*"*/;
	return -1;
}

