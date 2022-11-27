#include <iostream>
#include <string>
#include <string.h>
using namespace std;
void getinfo(string& name, int& age);
void printout(string thename, int theage);


int main()
{
 	using namespace std;
 	string tname = "";
 	int num = 0;
 	
 	getinfo(tname, num);
 	printout(tname, num);
 	
 	
 	return 0;
}
	void getinfo(string& name, int& age){
		using namespace std;
		cout << "enter your name : ";
		cin >>name;
		cout << "enter your age : ";
		cin >> age;

	};
void printout(string thename, int theage){
	using namespace std;
	cout <<" my name is "<< thename<< " and i am "<< theage<< " years old"<<endl;
	
};

 


