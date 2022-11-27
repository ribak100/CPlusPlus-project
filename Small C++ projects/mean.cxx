#include <iostream>
#include <string>
using namespace std;
int main()
{
	int  x;
	double n , mean, value, sum, nume;
	cout<<"Enter the total number of numbers to be calculated :";
	cin>> n;
	nume = n;
	sum = 0;
	while (n > 0)
		{
			cout << "enter your value :";
			cin >> value;
			n -= 1;
			sum = sum + value;
			mean = sum / nume;
			
		}
		
	cout << "\n<<<<<<calculation completed>>>>>>";

	
	do{
		
		cout << "\ndo you want the mean value of the operation?" << "\n<<<<<<<input>>>>>>>\n<<<<<<<1 for YES>>>>>>>\n<<<<<<<2 for NO>>>>>>>\n<<<<<<<3 to end the program>>>>>>>";
		
		cin >> x;
		switch (x)
			{
	
				case 1 : 
					cout << "your mean value is " <<mean;
					break;
				
				case 2 :
					cout << "ok, kindly input exit to end the program, or input y to get the mean value";
					break;
			
				case 3 :
					cout << "<<<<<<<<program ended>>>>>>>>\n ***THANK YOU FOR USING MY PROGRAM";
					break;
				default :
					cout << "\nyou input the wrong option";
					break;
				
			}
		} while ( x != 3);	
	
	
	
		
	
		
	
	return 0;
}