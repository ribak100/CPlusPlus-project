#include <iostream>
using namespace std;
struct student
{
	char name[70];
	int age;
	float score;
};
int main()
{
	student aver[3];
	int i;
	float average;
	int sum;

    for (int i = 0; i < 3; i++)
    {
      cout<<"student name";
      cin>>aver[i].name;
      cout<<"student age";
      cin>>aver[i].age;
      cout<<"student score";
      cin>>aver[i].score;

    }
    for (int i = 0; i < 3; i++)
    {
    	sum+=aver[i].score;
    }
    average=sum/3;
    	cout<<average;


	return 0;
}
