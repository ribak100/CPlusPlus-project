#include<iostream>
//if i want to stop the assertion i will remove the comment i placed on #define NDEBUG
//#define NDEBUG
//the assertion library to force the user to input the range of value i want
#include <cassert>
using namespace std;
void getdata(double& input1, double& input2);
double dividenumbers(double& x, double& y);
void output(double answer);

int main()
{
	double y, z , myanswer;
	getdata(y, z);
	myanswer= dividenumbers(y, z);
	output(myanswer);
	
	return 0;
}

void getdata(double& input1, double& input2){
	using namespace std;
	cout << "enter the two numbers you wish to divide : ";
	cin>>input1>>input2;	
	
};

double dividenumbers(double& x, double& y){
	using namespace std;
	// this is an assertion that forces the user to enter a value greater tham zero
	double ans = 0;
	assert((x>0)&&(y>0));
	return ans = x/y;
}
	
	
void output(double answer){
	cout <<"the answer is : "<< answer<<endl;
	
};
	