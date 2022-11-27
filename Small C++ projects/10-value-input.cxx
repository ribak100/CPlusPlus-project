#include <iostream>
using namespace std;
int main()
{
	int n, nreg, value, psum, nsum, tsum, np, nn, x;
	double positive, negative, total;
	double atsum, apsum, ansum;
	n = 10;
	psum = 0;
	nsum= 0;
	tsum =0;
	np =0;
	nn = 0;

	cout << "NAME: ADEKANYE ABDULKABIR" << endl;
   cout << "MATRIC NO: 2017/1/66042CS" << endl;
   cout << "PROGRAM: INTREST RATE CALCULATION\n";
   cout<<"----------------------------------------------------------";	
	
	do{
		cout << "<<<<<<< To start the calculation input 1 >>>>>>>>\n<<<<<<< To end the program input 2 >>>>>>>\n";
		 
		 	cin >> x;
			switch (x){
			case 1:
				while (n > 0){
				cout <<"input the no "<<n<<" value :";
				cin >> value;
				tsum = tsum + value;
		
				if (value > 0){
					psum = psum + value;
				}
				else if (value < 0){
					nsum = nsum + value;
				}
		
				if (value < 0){
					nn = nn + 1;
				}
				else if (value > 0 ){
					np = np + 1;
				}
		
		
				n -= 1;
		
			}
	
			total = tsum;
			positive = psum;
			negative = nsum;

			atsum = total / 10;
			apsum = positive / np;
			ansum = negative / nn;
	
			cout<< "total positive and negative value is :" << tsum;
			cout <<"\ntotal positive sum is :"<< psum;
			cout<<"\ntotal negative sum is :" << nsum;

			cout<< "\naverage of total positive and negative value is :" << atsum;
			cout <<"\naverage of total positive sum is :"<< apsum;
			cout<<"\naverage of total negative sum is :" << ansum;
	
		
	
	
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