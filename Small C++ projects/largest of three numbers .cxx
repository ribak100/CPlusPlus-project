#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	
	cout<< "enter 3 integers : ";
	cin>> a>>b>>c;
	
	if (a>b)
		if (a>c)
			cout <<a;
		
	
	
	else 
		cout << c;
	
	else if (b>c)
			cout <<b;
		
		else 
		cout<< c;
		
		
		
	return 0;
	
};