#include<iostream>
using namespace std;
int main()
{
	// my empty code file, incase i need it
	int theNumber;
	//placing value in theNumber
	theNumber = 4;
	//prompt for the value to store in the variable theNumber
	cout<<"input the value of theNumber :\n";
	cin >> theNumber;
	//produce a new line 
	cout <<"\ni love cyber security\nand i also enjoy programmimg and problem solving\n";
	//showing 4 decimal point 
	double theNumber2;
	theNumber2 = 14.372722828;
		
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	cout<<"theNumber2 = " <<theNumber2;
	
	
	
	return 0;
}