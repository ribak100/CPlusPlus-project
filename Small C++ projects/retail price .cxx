#include <iostream>
// explain what the program is all about
void explanation();
//get the input from user 
void getdata(double& wholesales, int& days);
//the  retail price of the inputed wholesales price
double retailprice(double& wsprice, int& day);
//output the wholesales price the number of days and the retail price
void output(double wholesprice, int days, double retail);
const double percent5 = 0.05;
const double percent10 = 0.1;
const int lastday = 7;


int main(){
	using namespace std;
	char condition;
	double wholesalesp;
	int nodays;
	double retailp;
	do{
		cout <<"do you want to calculate the retail price of a goods\n"<<"if yes input 'y'\n"<<"if no input 'n'"<<endl;
		cin>>condition;
		
		switch (condition){
			case 'y' :
				explanation();
				getdata(wholesalesp, nodays);
				retailp = retailprice(wholesalesp , nodays);
				output(wholesalesp , nodays, retailp);
				break;
			case 'n' : 
				cout <<"      ******THANK YOU FOR USING MY PROGRAM******\n"<<"                 ♡☆☆PROGRAM ENDED☆☆♡"<<endl;
				break;
			default : 
				cout<<"caution! please input the correct option"<<endl;
		}
	}while (condition != 'n');
	
	return 0;
}

void explanation(){
	using namespace std;
	cout<< "This program is used to calculate the retail price of a goods for a specific period of time"<<endl;
	
};

void getdata(double& wholesales, int& days){
	using namespace std;
	
	cout<<"enter the wholesales price : ";
	cin >> wholesales;
	cout <<"enter the number of days : ";
	cin>> days;
	
};

double retailprice(double& wsprice, int& day){
	using namespace std;	
	if (day <= lastday){
		return wsprice + (wsprice * percent5);
	}
	else {
		return wsprice + (wsprice * percent10);
	}
	
	
	
};
void output(double wholesprice, int days, double retail){
	using namespace std;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "if the whole sales price is : "<<wholesprice<<" and the threshold is : "<<days<<endl;
	cout <<"them the retail price would be : "<<retail<<endl;
	
	
};

	