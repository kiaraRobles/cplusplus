/*
A simple text-file opening program by Kiara Robles.
Coded as part of learning C++.

02/24/14
Prints a corresponding digit from a single character
*/

#include <iostream>
using namespace std;

int main()
{
	char  input;
	cout << "Letter: " << flush;
	cin  >> input;
	
	if  (input >= 'A' && input <= 'Z') 
	{ 
		// Prints corresponding number for each valid letter
		if (input >= 'A' && input <= 'C')
			cout << "Number: 2" << endl;	
		if (input >= 'D' && input <= 'F')
			cout << "Number: 3" << endl;	
		if (input >= 'G' && input <= 'I')
			cout << "Number: 4" << endl;	
		if (input >= 'J' && input <= 'L')
			cout << "Number: 5" << endl;		
		if (input >= 'M' && input <= 'O')
			cout << "Number: 6" << endl;	
		if (input >= 'P' && input <= 'S')
			cout << "Number: 7" << endl;
		if (input >= 'T' && input <= 'V')
			cout << "Number: 8" << endl;	
		if (input >= 'W' && input <= 'Y')
			cout << "Number: 9" << endl;	
		if (input == 'Q' || input == 'Z')
			// Corresponding decision for each invalid entry
			cout << "There is no corresponding number for " << input << endl;	   
	}
	else 
		cout << "Please input only captial letters"	<< endl; 
	return 0;
}
