#include <iostream>

//student information structure
struct student_info
{
	char name[100];
	int age;
	double score;
};
int main()
{
	using namespace std;

	cout << "NAME: ADEKANYE ABDULKABIR" << endl;
	cout << "MATRIC NO: 2017/1/66042CS" << endl;
	cout << "PROGRAM: STUDENT AVERAGE SCORE" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << " \n";

	student_info student[5];

	double average_score;
	double sum = 0;

	for (int info = 1; info <= 5; info++)
	{
		cout << "information of student number " << info;
		cout << "\nEnter student name : ";
		//cin>>student[info].name;
		cout << "Enter student age : ";
		//cin>>student[info].age;
		cout << "Enter student score : ";
		cin >> student[info].score;
		sum += student[info].score;

		cout << " \n";
		cout << "------------------------------------------------------------\n";
	}

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	average_score = sum / 5;
	cout << "The total average score of all student is : " << average_score;

	return 0;
}
