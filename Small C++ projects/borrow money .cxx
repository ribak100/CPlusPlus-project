#include<iostream>
using namespace std;
int main()
{
	char x;
	double intRate, mduration;
	double yduration, fIntRate, faceValue, amtneeded, totalIntrest;
	
	cout << "NAME: ADEKANYE ABDULKABIR" << endl;
   cout << "MATRIC NO: 2017/1/66042CS" << endl;
   cout << "PROGRAM: INTREST RATE CALCULATION\n";
   cout<<"----------------------------------------------------------";	
	
	do{
		cout << "<<<<<<< To start the program input 'y' >>>>>>>>\n<<<<<<< To end the program input 'n' >>>>>>>\n";
		 
		 	cin >> x;
			switch (x){
			case 'y':

				cout << "input the total amount needed :";
				cin >> amtneeded;
				cout << "input the intrest rate in percentage :";
				cin >> intRate;
				cout<< "input the number of months :";
				cin>> mduration;
	
				fIntRate = intRate / 100;
				yduration = mduration / 12;
		
	
				totalIntrest = amtneeded / ((1/(fIntRate * yduration))-1);
	
				faceValue = totalIntrest + amtneeded;
	
				cout << "The face value of the collected amount is :"<<faceValue;

				case 'n':
				cout << "\nPROGRAM COMPLETED SUCESSFULLY\n";
				break;
				default :
				cout<< "please input 1 or 2 to continue\n";
				break;
	
			}
	}while(x != 'n');
	
	
	
		cout << "\n**THANK YOU FOR USING MY PROGRAM**\n";
				

	
	
	
	
	
	

	
	
	return 0;
}