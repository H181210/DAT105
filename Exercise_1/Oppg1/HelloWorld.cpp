// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	std::string navn = "";
	std::cout << "Skriv inn navnet ditt: " << std::endl;
	std::cin >> navn;
	std::cout << "Hello " << navn << std::endl;
	return 0;
}

