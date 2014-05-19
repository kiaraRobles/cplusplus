/*
A simple text-file opening program by Kiara Robles.
Coded as part of learning C++.

03/12/14
Coverts fahrenheit to celsius with a while loop
*/

#include <iostream>
using namespace std;

int main ()
{
	double dc = 0, df = 0, ss = 0;
	int nl = 0, tnl = 0;

	cout << "Starting farhrenheit value: " << flush;
	cin  >> df;

	cout << "Step Size: " << flush;
	cin  >> ss;

	cout << "Number of lines: " << flush;
	cin  >> nl;
	
	cout << endl;
	
	while (tnl < nl)
	{
		dc =  (5.0/9.0)*(df-32);
	
		cout << df << "\t :\t" << dc << endl;
		
		df += ss;  // adding step size to degrees fahrenheit
		tnl++;     // incrementing total number of lines to count
		
	}
	
	return 0;
}
