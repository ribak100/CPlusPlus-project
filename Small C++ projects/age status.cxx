#include <iostream>
#include<string>
using namespace std;
int main()
{
	int age;
	string status;
	
	cout<<"enter age";
	cin>> age;
	
	if (age < 20){
		status = "teenager";
		cout<<status;
	}
	else if ((age >20) || (age < 50)){
		status =" adult";
		cout << status;
	}
	else if (age > 50){
		status = "old man";
		cout<< status;
	}
	
		
	
	
	
	
	return 0;
}


