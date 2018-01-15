// fakultet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


long fakultet(long n, long resultat);

int main()
{
	long tall = 0;
	long const ener = 1; 
	std::cout << "Skriv inn tallet du vil fakultere: " << std::endl;
	std::cin >> tall;
	std::cout << "Fakultetet av " << tall << " er " << fakultet(tall,ener) << std::endl;

    return 0;
}

long fakultet(long n, long resultat)
{
	if (n == 1) return resultat; 
	else return fakultet(n - 1, n * resultat);
}