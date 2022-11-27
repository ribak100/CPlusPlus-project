#include<iostream>
using namespace std;
int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	int gWeight, pWeight,x;
	double killWeight, killPerCan = 0.35, totalSwtn, totalSoda;
	
	cout << "NAME: ADEKANYE ABDULKABIR" << endl;
   cout << "MATRIC NO: 2017/1/66042CS" << endl;
   cout << "PROGRAM: INTREST RATE CALCULATION\n";
   cout<<"----------------------------------------------------------";	
	
	do{
		cout << "<<<<<<< To start the calculation input 1 >>>>>>>>\n<<<<<<< To end the program input 2 >>>>>>>\n";
		 
		 	cin >> x;
			switch (x){
			case 1:
				cout << "input the weight you will stop diet in pounds :";
				cin >> pWeight;
	
				gWeight = pWeight * 454;
				killWeight = gWeight / 7;
				totalSwtn = killWeight / killPerCan;
				totalSoda = totalSwtn * 350;
	
	
				cout<< "The total soda that can cause death to someone with the body weight of " <<pWeight<<" pounds is " <<totalSoda <<"\n";
			
				case 2:
				cout << "\nPROGRAM COMPLETED SUCESSFULLY\n";
				break;
				default :
				cout<< "please input 1 or 2 to continue\n";
				break;
	
			}
	}while(x != 2);
	
	
	
		cout << "\n**THANK YOU FOR USING MY PROGRAM**\n";
	
	
	
	return 0;
}


