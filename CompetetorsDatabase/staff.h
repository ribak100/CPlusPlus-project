#include<iostream>
#include<fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <iterator> //for std::istream_iterator
#include <vector>
#include <iomanip>
using namespace std;
/*
int s_check(char a[])
    {
  if(( (a[0]=='m')||(a[0]=='f')||(a[0]=='M')||(a[0]=='F'))&&(a[1]=='\0') )
  {
    return 1;
  }
  else
  {
    cout << "\n\tIncorrect input. Try again !\n";
    return 0;
  }
}
*/
int ncheck (char arr[])
{
  int i=0;
  while (arr[i]!='\0')
  {
    if (((arr[i] > 64) && (arr[i] < 92)) || ((arr[i] > 95) && (arr[i] < 124)) || (arr[i] ==' '))
    {

      i++;
      continue;
    }
    else
    {
      cout << "\n\tIncorrect input. Try again !\n ";
      return 0;
    }
  }
  return 1;
}




typedef struct staff
{
 string id;// for staff id
 string title;
 string fName;//for student first name
 string lName;//for student last name
 char sex;
 string qualification;//for Registration No number
 string mNumber;//for class info
 string pay;//Pay of the Teacher
 string classTaken;
};


void newStaffRegistration()
{
    fstream outfile ("staffInfo.txt",ios::app);
    staff s1;
    cout<<"StaffId: ";
    cin>>s1.id;
    cout<<"TILTE ";
    cin>>s1.title;
    cout<<"FirstName: ";
    cin>>s1.fName;
    cout<<"LastName: ";
    cin>>s1.lName;
    cout <<"Sex : ";
    cin >> s1.sex;
    cout<<"Pay:";
    cin>>s1.pay;
    cout<<"Qualification: ";
    cin>>s1.qualification;
    cout<<"Mobile Number: ";
    cin>>s1.mNumber;
    cout<<"Class Taken: "<<endl;
    cout<<"<<1>> Nursery 1"<<endl;
    cout<<"<<2>> Nursery 2"<<endl;
    cout<<"<<3>> Nursery 3"<<endl;
    cout<<"<<4>> Primary 1"<<endl;
    cout<<"<<5>> Primary 2"<<endl;
    cout<<"<<6>> Primary 3"<<endl;
    cout<<"<<7>> Primary 4"<<endl;
    cout<<"<<8>> Primary 5"<<endl;
    cout<<"<<9>> Primary 6"<<endl;
    cout<<"<<10>> Others "<<endl;
    int x;
    cin >>x;
    switch(x){
        case 1:{
        s1.classTaken = "Nursery1";
        break;
        }case 2:{
        s1.classTaken = "Nursery2";
        break;
        }case 3:{
        s1.classTaken = "Nursery3";
        break;
        }case 4:{
        s1.classTaken = "Primary1";
        break;
        }case 5:{
        s1.classTaken = "Primary2";
        break;
        }case 6:{
        s1.classTaken = "Primary3";
        break;
        }case 7:{
        s1.classTaken = "Primary4";
        break;
        }case 8:{
        s1.classTaken = "Primary5";
        break;
        }case 9:{
        s1.classTaken = "Primary6";
        break;
        }case 10:{
            cout <<"Enter class taken : ";
            cin >> s1.classTaken ;
            break;
        }
        default :{
        cout << "Please enter a valid option"<<endl;
        break;
        }

    }

    outfile<<s1.id<<" "<<s1.title<<" "<<s1.fName<<" "<<s1.lName<<" "<<s1.sex<<" "<<s1.pay<<" "<<s1.qualification<<" "<<s1.mNumber<<" "<<s1.classTaken<<endl;
    cout<<"\n**Successfully Added**\n";
    outfile.close();
    return;
}
void updateStaffInform()
{
    string sId;
    cout<<"\n Enter staff Id:\n";
    cin>>sId;

    staff s1;
    fstream infile ("staffInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string line;

    while(std::getline(infile, line))
    {

        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && sId==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag==1)
        {
             cout<<"StaffId: ";
    cin>>s1.id;
    cout<<"TILTE ";
    cin>>s1.title;
    cout<<"FirstName: ";
    cin>>s1.fName;
    cout<<"LastName: ";
    cin>>s1.lName;
    cout <<"Sex : ";
    cin >> s1.sex;
    cout<<"Pay:";
    cin>>s1.pay;
    cout<<"Qualification: ";
    cin>>s1.qualification;
    cout<<"Mobile Number: ";
    cin>>s1.mNumber;
    cout<<"Class Taken: "<<endl;
    cout<<"<<1>> Nursery 1"<<endl;
    cout<<"<<2>> Nursery 2"<<endl;
    cout<<"<<3>> Nursery 3"<<endl;
    cout<<"<<4>> Primary 1"<<endl;
    cout<<"<<5>> Primary 2"<<endl;
    cout<<"<<6>> Primary 3"<<endl;
    cout<<"<<7>> Primary 4"<<endl;
    cout<<"<<8>> Primary 5"<<endl;
    cout<<"<<9>> Primary 6"<<endl;
    cout<<"<<10>> Others "<<endl;
    int x;
    cin >>x;
    switch(x){
        case 1:{
        s1.classTaken = "Nursery1";
        break;
        }case 2:{
        s1.classTaken = "Nursery2";
        break;
        }case 3:{
        s1.classTaken = "Nursery3";
        break;
        }case 4:{
        s1.classTaken = "Primary1";
        break;
        }case 5:{
        s1.classTaken = "Primary2";
        break;
        }case 6:{
        s1.classTaken = "Primary3";
        break;
        }case 7:{
        s1.classTaken = "Primary4";
        break;
        }case 8:{
        s1.classTaken = "Primary5";
        break;
        }case 9:{
        s1.classTaken = "Primary6";
        break;
        }case 10:{
            cout <<"Enter class taken : ";
            cin >> s1.classTaken ;
            break;
        }
        default :{
        cout << "Please enter a valid option"<<endl;
        break;
        }




    }

    tempfile<<s1.id<<" "<<s1.title<<" "<<s1.fName<<" "<<s1.lName<<" "<<s1.sex<<" "<<s1.pay<<" "<<s1.qualification<<" "<<s1.mNumber<<" "<<s1.classTaken<<endl;
        cout<<"\n**Successfully updated**\n";

        }
        else
        {

            tempfile<<line<<endl;
        }
    }
    infile.close();
    tempfile.close();
    remove("staffInfo.txt");
    rename("tempInfo.txt","staffInfo.txt");

}
void deleteStaffInform()
{
        string sId;
    cout<<"\n Enter staff Id:\n";
    cin>>sId;

    staff s1;
    fstream infile ("staffInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string line;

    while(std::getline(infile, line))
    {

        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && sId==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag!=1)
        {
            tempfile<<line<<endl;
        }
        else
        {
            cout<<"\n\n ** deleted successfully**\n";

        }
    }
    infile.close();
    tempfile.close();
    remove("staffInfo.txt");
    rename("tempInfo.txt","staffInfo.txt");

}

void listOfStaffs()
{

    fstream file ("staffInfo.txt");
    staff s1;
cout<<endl<<"\t\t\t\t !** STAFF LIST **!\t\t\n\n\n";

    cout<<setw(15)<<"S.ID"<<setw(15)<<"TITLE"<<setw(15)<<"F.NAME:"<<setw(15)<<"L.NAME"<<setw(15)<<"S.SEX"<<setw(15)<<"PAY"<<setw(17)<<"QUALIFICATION"<<setw(13)<<"M.NUMBER"<<setw(15)<<"S.CLASS TAKEN"<<endl<<endl;
    string line;
    while(std::getline(file, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;

        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;

        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {

                cout<<setw(15)<<*it;// prints d.

        }
        cout<<endl;
    }
        cout<<endl;

}
