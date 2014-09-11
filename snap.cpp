// Displays "Crackle" when divisable by 3, "Pop" when divisable by 5, and "CracklePop" when divisable by 3 and 5.

#include<iostream>

using namespace std;

int main () {

int i, x, y;	
	
	for( i=1; i<=100; i++) {
	
		x = i % 3;
		y = i % 5;
		
		if((x == 0) && (y == 0)) {
			// if divisible by 3 and 5 then print the following
			cout << i << "\t CracklePop \n";
		} else if((x == 0) && (y != 0)) {
			// if divisible by 3 and not 5 then print the following
			cout << i << "\t Crackle \n";
		} else if((x != 0) && (y == 0)) {
			// if divisible by 5 and not 3 then print the following
			cout << i << "\t Pop \n";
		} else{
			// if not divisible 5 or 3 then print the following
			cout << i << endl;
		}
	}
	cout << endl << endl << endl;
	return 0; 
