/*
A simple text-file opening program by Kiara Robles.
Coded as part of learning C++.

02/24/14
Tests for a right trangle
*/

#include <iostream>
using namespace std;


int main()
{
	double a, b, c;
		
	cout << "Right Triangle Test" << endl;
	cout << "Input the length of three sides" << endl;
	cout << endl;
	
	cout << "Side 1: " << flush;
	cin  >> a;
	cout << "Side 2: " << flush;
	cin  >> b;
	cout << "Side 3: " << flush;
	cin	 >> c;
	
	a = a*a; 	// squaring the values of each side 
	b = b*b;
	c = c*c;
	
	if (a+b==c)	// testing of each of the 3 possible right angles
	{
	 	cout << endl;
		cout << "This is a right triangle" << endl; 
	}
	if (c+a==b)
	{
	 	cout << endl;
		cout << "This is a right triangle" << endl; 
	}
	if (b+c==a)
	{
	 	cout << endl;
		cout << "This is a right triangle" << endl; 
	}	 
	if ((a+b!=c)&&(c+a!=b)&&(b+c!=a))	// desision to indicate no right angle
	{
	 	cout << endl;
		cout << "This is not a right triangle" << endl; 
	}	   	        	     	     
	return 0;
}

