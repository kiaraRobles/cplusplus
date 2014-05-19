/*
A simple text-file opening program by Kiara Robles.
Coded as part of learning C++.

03/17/14
Counts number inbetween two values
*/

#include <iostream>
using namespace std;

int main()
{  
	int firstValue = 0, secondValue = 0;
	int nStart = 0, nStop =0; // declaring varables start/stop varables to simplify loop
	
	cout << "Enter two integer numbers: " << endl;
	cin  >> firstValue;
	cin  >> secondValue;
	cout << endl;
	
	// determining start from stop value 
	if (firstValue < secondValue)
	{
		nStart = firstValue;
		nStop = secondValue;
	}
	if (secondValue < firstValue)
	{
		nStart = secondValue;
		nStop = firstValue;
	}
	// counting from start to stop inputs
	for (int n = nStart; n <= nStop; n++)
	{
		cout << n << " " << flush;
	}
	
	return 0; 
}
