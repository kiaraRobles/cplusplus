/*
A simple text-file opening program by Kiara Robles.
Coded as part of learning C++.

03/17/14
Saves and computes the first, last, smallest, largest, and average values from a series of inputs
*/

#include <iostream>
using namespace std;

int main()
{
	double first = 0, last = 0, beforeLast = 0, smallest = 0, largest = 0, count = 0, average = 0, value = 0, sum = 0;

	
	cout << "Enter integers until you want to stop (< or = 0 to stop): " << endl;
	cin  >> first;

	// saving relevant values into variables
	value = first;
	smallest = value;
	sum = value;
	
	while ( value > 0)
	{
	 	
		beforeLast = value;
		
		cin  >> value;
		
		if (value > 0)
		{
			sum += value;
			
			if (value < smallest) 		// saving off new smallest input
			{
				smallest = value; 
				beforeLast = value;     // saving off the last value 
				++count;		  		// adding one to the count
			}
			if (value > largest)  		// saving off largest smallest input
			{
				largest = value;
				beforeLast = value;     // saving off the last value
				++count;          		// adding one to the count
			}
		}	
		else
			last = value;
			average = (sum/count);
	}	 

	cout << "\nFirst :\t\t" << first  
	 	 << "\nLast :\t\t" << beforeLast
	 	 << "\nSmallest :\t" << smallest
	 	 << "\nLargest :\t" <<  largest
	 	 << "\nAverage :\t" << average << endl;
	 
	return 0;
}




