/*
A simple text-file opening program by Kiara Robles.
Coded as part of learning C++.

This program converts from Fahrenheit to Celsius with an if else statement
*/

#include <iostream>
using namespace std;

const float ABSOLUTE_ZERO = -273.15f; // 

int main()
{
	float dc, df;
	
	cout << "Enter the temprature in Fahrenheit: " << flush;
	cin  >> df;
	
	dc = (5.0/9)*(df-32);  // Calulating degrees celsius from fahrenheit
	
	if(dc>=ABSOLUTE_ZERO)  // Control structure for valid and non valid entries
	{
		cout << "The temperature " << df << " degrees Fahrenheit equals " << dc << " degrees Celsius"<< flush;
	} else
	{
		cout << "The temperature you entered isn't a legal temperature because it's below absolute zero" << flush;
	}
	
	return 0;
}
