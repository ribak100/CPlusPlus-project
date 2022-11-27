#include<iostream>
using namespace std;

class dayOfYear
{
	public:
		
	void myDays();
		int day;
		int month;
		int year;
	
};


int main()
{
	
	dayOfYear today, birthday;
	
	cout<< "----------enter today's date----------\n";
	cout<<"enter year : ";
	cin>>today.year;
	cout<<"enter month as number : ";
	cin>> today.month;
	cout<<"enter day : ";
	cin>>today.day;
	
	cout<< "----------enter your birthday----------\n";
	cout<<"enter year : ";
	cin>>birthday.year;
	cout<<"enter month as number : ";
	cin>> birthday.month;
	cout<<"enter day : ";
	cin>>birthday.day;
	
	
	
	
	
	if (today.month == birthday.month && today.day == birthday.day){
		cout << "☆HAPPY BIRTHDAY☆ :)"<<endl;
		
	}
	else {
		cout<< "sorry man today is not ya birthday";
	
	}
	
	
	return 0;
}

