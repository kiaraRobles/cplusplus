/*
A simple text-file opening program by Kiara Robles.
Coded as part of learning C++.

02/26/14
Tests for the larger of two rectangles
*/

#include <iostream>
using namespace std;

int main()
{
	float a1, a2, l1, l2, w1, w2;
	
	// Getting the users input for the first rectangle
	cout << "Enter dementions of first rectangle" << endl;
	cout << "Length: " << flush;
	cin  >> l1;
	cout << "Width: " << flush;
	cin  >> w1;
	cout << endl;
	
	// Getting the users input for the second rectangle
	cout << "Enter dementions of second rectangle" << endl;
	cout << "Length: " << flush;
	cin  >> l2;
	cout << "Width: " << flush;
	cin  >> w2;
	cout << endl;
	
	// Calulating the area of both rectangles
	a1 = l1 * w1; 
	a2 = l2 * w2;
	
	// A control sturucture to determine which of the two rectagles is larger
	if(a1==a2)
		cout << "The two rectangles are equalivant" << endl;
	else
		if(a1>a2)
			cout << "The first rectangle is larger" << endl;
		else
			cout << "The second rectangle is larger" << endl;
	return 0;
}

