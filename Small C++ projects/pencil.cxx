#include<iostream>
using namespace std;
int main()
{
	int years, price , cost, tPrice, x;
	double inflation, fInflation, pIncrease, yIncrease, cost_after_x_years ;
	int const pencilNo = 200;
	cout << "NAME: ADEKANYE ABDULKABIR" << endl;
   cout << "MATRIC NO: 2017/1/66042CS" << endl;
   cout << "PROGRAM: INTREST RATE CALCULATION\n";
   cout<<"----------------------------------------------------------";	
	do{
		 	cout << "<<<<<<< To start the program input 1 >>>>>>>>\n<<<<<<< To end the program input 2 >>>>>>>\n";
		 
		 	cin >> x;
			switch (x){
			case 1:
			
		
	cout<< "input cost of item :";
	cin >> cost ;
	cout << "input number of years :";
	cin >> years;
	cout << "input inflation rate :";
	cin >> inflation;
	fInflation = inflation / 100;
	tPrice = pencilNo * cost;
		
			
			
			

		
			
			
	
				while (years > 0){
			
					pIncrease = tPrice * fInflation;
			
					yIncrease = pIncrease * years;
			
					cost_after_x_years = tPrice + yIncrease;
				
					cout<< "The price of pencil the " <<years << " year is :" << cost_after_x_years<<"\n";
					years -= 1;
					
					
			
			}
					case 2: 
					cout << "CALCULATION COMPLETED SUCESSFULLY\n";
					break;
					default :
					cout<< "please input 1 or 2 to continue\n";
					break;
			}    
			  
		}while (x != 2);
		
		
		
			cout << "**THANK YOU FOR USING MY PROGRAM**";
	
	return 0;
}