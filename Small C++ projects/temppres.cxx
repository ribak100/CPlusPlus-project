#include <iostream>
using namespace std;
int main()
{
	int temp, pres ;
	cout <<"please enter the value of temperature :";
	cin>> temp;
	cout<<"please enter the value of pressure :";
	cin>> pres;
	
	if (temp > 100 || pres > 100)
		
		cout <<"<<<<<<<<CAUTION>>>>>>>>"
			      << "\nThe temperature and pressure is too high today, please stay indoor";
		
	else
		cout << "The temperature  and pressure is condusive, you can go anywhere you want";
		
	
	
	
	
	
	
	
	return 0;
}