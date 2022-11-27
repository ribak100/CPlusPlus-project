#include <iostream>
using namespace std;
int main()
{
	double radius, area, radiusSquare;
	cout << "enter the value of radius. \n";
	cin >> radius;
	radiusSquare = radius * radius;
	area = 2 * 3.142 * radiusSquare;
	cout<< area, cout<< " is the area of the circle ";
	cout<< radius;
	cout<<"\nTHANK YOU FOR USING C++";
	
	
	
	return 0;
}