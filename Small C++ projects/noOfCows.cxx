#include <iostream>
using namespace std;
int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	int numberOfCows, numberOfHerdsman, totalNumberOfCows;
	double priceOfCow, totalPriceOfCows;
	priceOfCow = 150000.00;
	cout<< "Enter number of cows. \n";
	cin >> numberOfCows;
	cout<< "Enter number of herdsman. \n";
	cin>> numberOfHerdsman;
	cout<< "If price of cow still remain #150,000. \n" <<"Then the total price of all the cows would be #";
	totalPriceOfCows = numberOfCows *  numberOfHerdsman * priceOfCow;
	totalNumberOfCows = numberOfCows * numberOfHerdsman;
	cout << totalPriceOfCows << " " ;
	cout<<"\n That means if " << numberOfHerdsman  <<" herdsman own " << numberOfCows <<" "  <<" cows, all their cows in total is " << totalNumberOfCows << " " << "And the price of all the cows is " << totalPriceOfCows <<". " << "\n I hope you understood the arithmetic. \n" <<"THANK YOU";
	
	
	
	return 0;
}