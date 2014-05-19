/*
A simple text-file opening program by Kiara Robles.
Coded as part of learning C++.

Calulates monthly payment for a mortgage
*/
 


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

	double m;
	cout << "Loan Amount:		     ";
	cin	 >> m;
	
	double n;
	cout << "Loan Period:		     ";
	cin  >> n;
	
	double r;
	cout << "Annual Percentage Rate:      ";
	cin  >> r;
	
	double part1 = 1 + (r / 12);
	double part2 = 12 * n;
	double part3 = pow(part1,part2);
	double equa1 = m * part3 * (r/12);
	double equa2 = part3 - 1;
	double p     = equa1 / equa2;
	
	cout << endl << "Monthly Payment:	 " << p << flush;

	
	return 0;
}
