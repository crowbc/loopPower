/*
This program will raise any number x to a positive integer power n using a 
for loop.
*/
/*
Author: Brian Crow
Created on: 21MAY2019
Modified on: 21MAY2019
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int n=0;
	int i;
	double x=0;
	double y=1;

	std::cout << "This program will read a number input by the user and ";
	std::cout << "raise it to a positive integer power n using\n";
	std::cout << "a for loop.\n";
	std::cout << "What number would you like to raise to the nth power? ";
	std::cin >> x;
	std::cout << "To what (positive) integer power will you raise this ";
	std::cout << "number? ";
	std::cin >> n;
	for (i=1; i<=n; i++) {
		y*=x;
	}
	std::cout << x << " raised to the power " << n << " is " << y << ".\n";

	return 0;
} // end main