#include <iostream>
using namespace std;

	int raiseToPower(int base, int exponent)
	{ 

 		int result = 1; 

		 for (int i = 0; i < exponent; i = i + 1) { 

		 result = result * base; 

		 }

		 return result; 

		}

int main()
{
/*	int threeExpoFour = 1;
	
	for (int i = 1 ;  i <= 4;  i ++){
		threeExpoFour = threeExpoFour * 3;
		}
	cout<< "3^4 = "<< threeExpoFour <<endl;
	
	int fiveExpthree = 1;
	for (int i = 1;  i <= 3; i++){
		fiveExpthree = fiveExpthree * 5;
	}
	
	cout << "5^3 ="<< fiveExpthree;
	
	*/
	
/*	int raiseToPower (int base, int expo){
	result = 1;
		for (int i = 0 ; i <= expo ; i ++){
		result = result * base;
	}
		
		
		return result;
	}
	
	int twoExpNine = raiseToPower(2, 9);
		cout <<"2^9 = "<< twoExpNine;
	*/
	

	int twoExpNine = raiseToPower(2, 9);
	cout<< twoExpNine;
	
	int twelveExpThree = raiseToPower(12, 3);
	cout << "\n12^3 = "<< twelveExpThree;
	return 0;
}