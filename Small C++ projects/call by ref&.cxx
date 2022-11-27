//Program to demonstrate call-by-reference parameters.
 #include <iostream>
void mynum(int num1, int& num2);
int main() {
	using namespace std;
	int n1, n2;
	n1 = 10;
	n2 = 5;
	mynum(n1, n2);
	cout << "n1 after function call : "<<  n1<<endl;
	cout <<"n2 after function call : "<<n2<<endl;
	
	return 0;
}

void mynum(int num1, int& num2){
	using namespace std;
	num1 = 1000;
	cout << "num1 in function call : "<<num1<<endl;
	num2 = 2000;
	cout <<"parameter in num2 : "<< num2<<endl;
}

	



