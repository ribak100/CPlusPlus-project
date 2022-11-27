#include <iostream>
using namespace std;
int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	int theNumber = 3000;
	cout << theNumber << "\nnew line";
	double decimalPlace(348.930076);
	cout<< "\n" << decimalPlace;
	
	
	
	
	
	
	
	return 0;
}