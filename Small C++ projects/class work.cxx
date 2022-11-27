#include <iostream>
using namespace std;
int main ()
{
	int pT , pC , m, mSquare, x ;
	cout << "in this program i will find the unknown value PT" << "\n------------------------------------------------------------"<< "\nenter the value of pC :";
	cin>> pC ;
	cout<< "\nenter the value of m :";
	cin >> m;
	mSquare = m * m;
	x = 1 + 0.5 * mSquare;
	pT = pC * x;
	cout <<"\nthe value of PT is :" << pT;
	
	
	
	
	
	
	
	
	return 0;
}