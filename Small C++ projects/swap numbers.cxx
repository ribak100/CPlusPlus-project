#include <iostream>
using namespace std;
//pre-condition : the input must be integers 
//get input from user
void getinput(int& input1, int& input2);
//pre-condition : only if the first input is larger than the second input
//swap data in getinput
void swapdata(int& var1, int& var2);
//used to arrange in asscending order i.e using swapdata functiom as the condition 
void order(int& small, int& large);
//output the data
void outputdata(int output1, int output2);

int main(){
	int number1, number2;
	getinput(number1, number2);
	order(number1, number2);
	outputdata(number1, number2);

	return 0;
}

	void getinput(int& input1, int& input2){
		cout<< "input 2 integers : ";
		cin>> input1>> input2;
			
	};
	void swapdata(int& var1, int& var2){
		int swap;
		swap = var1;
		var1 = var2;
		var2 = swap;
		
		
	};
	void order(int& small, int& large){
		if (small > large){
			swapdata(small, large);
		}
		
		
	};
	void outputdata(int output1, int output2){
		cout << "the integer in asscending order is "<<output1<<" "<<output2<<endl;
		
		
		
	};