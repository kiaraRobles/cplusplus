/*
A simple text-file opening program by Kiara Robles.
Coded as part of learning C++.

This program calulates user's pay
*/

#include <iostream>

int main ()
{
	float hours, hours2, rate, pay, t_pay;

	std::cout << "Input houly rate: ";
	std::cin  >> rate;

	std::cout << "Input hours worked: ";
	std::cin  >> hours;

	std::cout << "Input overtime hours: ";
	std::cin  >> hours2;

	pay   = hours * rate;
	t_pay = hours2 * rate * 1.5 + pay;

	std::cout << "Gross Pay $" << t_pay;
	return 0;
}
