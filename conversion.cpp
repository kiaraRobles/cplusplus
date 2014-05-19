/*
A simple text-file opening program by Kiara Robles.
Coded as part of learning C++.

01/27/14
Coverts Miles and Feet to Total Kilometers
*/

#include <iostream>
using namespace std;

const float FtPerMi = 5280.0f;
const float FtPerM  = 3.28f;
const float MPerKm  = 1000.0f;

int main ()
{
	float mi, ft, mikm, ftkm, tkm;
	
	cout << "Enter Miles : " << flush;
	cin  >> mi;
	cout << "Enter Feet : "  << flush;
	cin  >> ft;
	
	mikm  = mi * FtPerMi / FtPerM / MPerKm;
	ftkm  = ft / FtPerM / MPerKm;
	tkm   = mikm + ftkm;
	
	cout << mi << "mi + " << ft << "ft = " << tkm << "km" << endl;
	return 0;
} 
