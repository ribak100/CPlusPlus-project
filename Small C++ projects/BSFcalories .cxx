#include <iostream>
#include <string>
using namespace std;
int main()
{
	double weight, height, bsfw, mbsfw, bsfh, bsfy, tCalories, chocoBar;
	int age;
	int gender, x;
	string f;
	string m;
	int const chocoCalories = 230;
	cout << "NAME: ADEKANYE ABDULKABIR" << endl;
   cout << "MATRIC NO: 2017/1/66042CS" << endl;
   cout << "PROGRAM: INTREST RATE CALCULATION\n";
   cout<<"----------------------------------------------------------";	
		
	do{
		 	cout << "<<<<<<< To start the program input 1 >>>>>>>>\n<<<<<<< To end the program input 2 >>>>>>>\n";
		 
		 	cin >> x;
			switch (x){
			case 1:
	
	cout << "input your weight in pounds";
	cin >> weight ;
	cout << "input your height in inches";
	cin >> height;
	cout << "input your age in years";
	cin >> age;
	
	cout << "please input your gender\n<<<<<<< 1 for male >>>>>>>\n<<<<<<< 2 for female >>>>>>>\n";
	cin >> gender;
	
	if (gender == 2){
		bsfw = 4.3 * weight;
		mbsfw = 665 + bsfw;
		bsfh = 4.7 * height;
		bsfy = 4.7 * age;
		tCalories = mbsfw + bsfh - bsfy;
		
		chocoBar = tCalories / chocoCalories;
		
		cout << "The amount of chocholate bar that you can eat to maintain your body weight is :" << chocoBar<< "\n";
	}
	else if (gender == 1){
		
		bsfw = 6.3 * weight;
		mbsfw = 66 + bsfw;
		bsfh = 12.9 * height;
		bsfy = 6.8 * age;
		tCalories = mbsfw + bsfh - bsfy;
		
		chocoBar = tCalories / chocoCalories;
	
		cout  << "The amount of chocholate bar that you can eat to maintain your body weight is :" << chocoBar<< "\n";
			}					
	else 
		cout<< "please input the correct gender value\n******Restarting program******\n";
		break;
		    
		    case 2:
			cout << "CALCULATION COMPLETED SUCESSFULLY\n";
			break;
			default :
			cout<< "please input 1 or 2 to continue\n";
			break;
	
			}
	}while(x != 2);
	
	
		cout << "**THANK YOU FOR USING MY PROGRAM**";
	
	
	return 0;
}