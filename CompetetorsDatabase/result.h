#include<iostream>
#include<fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <iterator> //for std::istream_iterator
#include <vector>
#include <iomanip>
using namespace std;




typedef struct result
{
 string rId;//for Registration No number
 string classes;//for classNo number
 string english;//for english
 string science;//for science
 string maths;//for maths
 string sStudy;//for sStudy
};
/*
char addSubject(string subjName,
int score){
cout << "Enter subject and score respectively"<<endl;

string subj;
int scor;
cin >>subj;
cin >> scor;
subjName = subj;
score= scor;
return subjName, score;

}
*/

result s1;

int x;

void newResultAdd()
{
    fstream outfile ("resultInfo.txt",ios::app);
    cout<<"Registration Id:";
    cin>>s1.rId;
    cout<<"Class:";
    cin>>s1.classes;
    cout <<"How many subjects is the student offering : "<<endl;
    cin>>x;

    cout <<"Enter subjects and score respectively"<<endl;
     for (int i=0; i<x;i++){
        std::string theSubject;
        int theResult;
        cin >>theSubject;
        cin >>theResult;
        outfile<<theSubject<<" "<<theResult<<endl;
    }
    cout<<"\n**Successfully Added**\n";
    outfile.close();
    return;

}
void updateResultAdd()
{
    string rId,classes;
    cout<<"\n Enter student registration Id:\n";
    cin>>rId;
    cout<<"\n Enter student Class:\n";
    cin>>classes;

    result s1;
    fstream infile ("resultInfo.txt");
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
            if(i==0 && rId==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag==1)
        {
    cout <<"How many subjects is the student offering : "<<endl;
    cin>>x;

    cout <<"Enter subjects and score respectively"<<endl;
    for (int i=0; i<x;i++){
        std::string theSubject;
        int theResult;
        cin >>theSubject;
        cin >>theResult;
        tempfile<<theSubject<<" "<<theResult<<endl;
    }
            cout<<"\n**Successfully updated**\n";

        }
        else
        {
            tempfile<<line<<endl;

        }
    }
    infile.close();
    tempfile.close();
    remove("resultInfo.txt");
    rename("tempInfo.txt","resultInfo.txt");


}
void deleteResult()
{

        string rId,classes;
    cout<<"\n Enter student registration Id:\n";
    cin>>rId;
    cout<<"\n Enter student Class:\n";
    cin>>classes;

    result s1;
    fstream infile ("resultInfo.txt");
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
            if(i==0 && rId==*it)
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
            cout<<"\n\n ** deleted successfully**\n\n";
        }
    }
    infile.close();
    tempfile.close();
    remove("resultInfo.txt");
    rename("tempInfo.txt","resultInfo.txt");



}

void overAllClassResult()
{
    string classes;
    cout<<"Enter the class:";
    cin>>classes;

    int failCount=0,passCount=0,totalCount=0;

    ifstream file("resultInfo.txt");
    string line;
    int check_fail=0;
    while(std::getline(file, line))
    {
            check_fail=0;
            istringstream ss(line);
            std::istream_iterator<std::string> begin(ss), end;
            //putting all the tokens in the vector
            std::vector<std::string> arrayTokens(begin, end);
            vector<string>::iterator it;
            int flag=0,i=0;
            for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
            {
                string p=*it;
                stringstream geek(p);
                // The object has the value 12345 and stream
                // it to the integer x
                int x = 0;
                geek >> x;
                if(flag==1)
                {
                    if(x<35)
                    {
                        check_fail=1;
                        failCount++;
                        break;
                    }
                    else
                    {
                        continue;
                    }

                }
                if(classes==(*it) && i==1)
                {
                        flag=1;
                        totalCount++;
                }
                i++;

            }
            if(check_fail==0 && flag==1)
            {
                passCount++;
            }

        }
        cout<<endl<<"\t\t\t\t !** CLASS "<<classes<<" RESULT**!\t\t\n\n\n";
        cout<<"Total No. of Failed Students:"<<failCount<<endl;
        cout<<"Total No. of Passed Students:"<<passCount<<endl;
        cout<<"Total No. of Students:"<<totalCount<<endl;
        cout<<"School Annual Result(%):"<<(double)(100*passCount)/totalCount<<"%";
        cout<<endl;

}

void schoolResult()
{
    int failCount=0,passCount=0,totalCount=0;
    ifstream file("resultInfo.txt");
    string line;
    while(std::getline(file, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;

        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int flag=0,i=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            string p=*it;
            stringstream geek(p);
            // The object has the value 12345 and stream
            // it to the integer x
            int x = 0;
            geek >> x;

            if(x<35 && i>1)
            {
                flag=1;
                failCount++;
                break;
            }
            i++;

        }
        if(flag==0)
        {
            passCount++;

        }


        totalCount++;
    }

    cout<<"Total No. of Failed Students:"<<failCount<<endl;
    cout<<"Total No. of Passed Students:"<<passCount<<endl;
    cout<<"Total No. of Students:"<<totalCount<<endl;
    cout<<"School Annual Result(%):"<<(double)(100*passCount)/totalCount<<"%";
    cout<<endl;
}

void studentResult()
{

    ifstream file("resultInfo.txt");
std::string theSubject;
        int theResult;

        while(file>>theSubject>>theResult){
            cout <<theSubject<<' '<<theResult<<endl;
        }
}
/*
void studentResult()
{
    string rId;
    cout<<"\nEnter student Reg.ID:";
    cin>>rId;
    ifstream file("resultInfo.txt");
    string line;
    int s_result=1;
    string r1;
    int total=0;
    while(std::getline(file, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;

        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int flag=0,i=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
             string p=*it;
             stringstream geek(p);
             // The object has the value 12345 and stream
             // it to the integer x
             int x = 0;
            geek >> x;
            if(flag==1)
            {
                total+=x;
                if(x<35)
                {
                    s_result=0;
                    break;
                }
                else
                {
                    continue;
                }

            }
            if(rId==(*it) && i==0)
            {
                flag=1;
                it++;
                r1=line;
            }
            else
                break;

        }
    }

        istringstream ss(r1);
        std::istream_iterator<std::string> begin(ss), end;

        std::string theSubject;
        int theResult;

        while(file>>theSubject>>theResult){
            cout <<theSubject<<' '<<theResult<<endl;
        }

        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            cout<<setw(10)<<*it;
        }

        if(s_result==0)
        {
            cout<<"**Result is Fail**";
        }
        else
        {
            cout<<"\n\n\tTotal Score->"<<total<<endl;
            cout<<"\tTotal Percentage(%)->"<<((double)total/500)*100<<"%"<<endl;
            cout<<"\t**Result is Pass**";
        }
        cout<<endl;
}
*/
