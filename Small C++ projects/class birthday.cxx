#include<iostream>
#include<string>
using namespace std;
int main()
{

	
	struct day{
		string sun;
		string mon;
		string tue;
		string wed;
		string thurs;
		string fri;
		string sat;
	};
	
	day weekdays = {"sunday","monday", "tuesday","wednessday","thursday","friday","saturday"};


	struct date{
		int year;	
		int month;
		day seven;
	};
	date mydate = {1995, 12, weekdays};
	
	
	
	
	struct personalInfo{
		string name;
		double height;
		double weight;
		date birthday;			
	};

	personalInfo myInfo = {"Abdulkabir", 75.6, 70, mydate};
	
	cout << myInfo.birthday.year;
	
	
	
	
	return 0;
}