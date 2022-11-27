#include <iostream>

void addnum(int& x);

int main()
{
	using namespace std;
	
	int a = 5;
	
	addnum(a);
	
	return 0;
}

void addnum(int& x) {
	using namespace std;
	
	int num;
	cout << "enter the amount of numbers you are going to add : ";
	cin >> x;
	cout << "enter each number and press the enter key : ";
	int sum = 0;
	for (int i =0; i<x; i++){
		cin >> num;
		sum += num;
	}
		cout << sum;
};




