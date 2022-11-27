#ifndef MYRESULT_H
#define MYRESULT_H

#include<iostream>
#include<fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <iterator> //for std::istream_iterator
#include <vector>
#include <iomanip>
using namespace std;




int x;
void newResultAdd()
{
    string rId;//for Registration No number
    string classes;
    fstream outfile ("resultInfo.txt",ios::app);
    cout<<"Registration Id:";
    cin>>rId;
    cout<<"Class:";
    cin>>classes;
    cout <<"How many subjects is the student offering : "<<endl;
    cin>>x;

    cout <<"Enter subjects and score respectively"<<endl;
     for (int i=0; i<x;i++){
        std::string theSubject;
        double theResult;
        cin >>theSubject;
        cin >>theResult;
        outfile<<classes<<" "<<rId<<" "<<theSubject<<" "<<theResult<<endl;
    }
    cout<<"\n**Successfully Added**\n";
    outfile.close();
    return;

}



void studentResult()
{

    string rId;//for Registration No number
string classes;
    string rId1;//for Registration No number
    string classes1;
        fstream file("resultInfo.txt");


        cout<<"Registration Id:";
        cin>>rId1;
        cout<<"Class:";
        cin>>classes1;

        std::string theSubject;
        double theResult;
        double sum =0;
        int count = 0;

        cout <<"\n\n PRINTING RESULTS\n\n\n";

        while(file>>classes>>rId>>theSubject>>theResult){
            if(rId==rId1){
                    if(classes==classes1){
            cout <<theSubject<<' '<<theResult<<endl;
            sum +=theResult;
            count++;
                    }
                    else{
                        cout <<"CLASS NOT FOUND"<<endl;
                        break;
                    }
            }

        }

        if (sum !=0){
                double perct = sum/count;
                file<<rId
                <<' '<<perct<<endl;
            cout <<"\n\n\STUDENT PERCENTAGE = "<<perct<<"%"<<endl;
        }

        cout << "\n\n\nRECORD PRINTED IF FOUND"<<endl;
        file.close();

}






void overAllClassResult()
{

    string rId;//for Registration No number
string classes;

    int totalCount=0;

    fstream file("resultInfo.txt");
    string rId1;//for Registration number
    string classes1;

    cout<<"Enter the class:";
    cin>>classes1;

        std::string theSubject;
        double theResult;


        cout<<endl<<"\t\t\t\t !** CLASS "<<classes1<<" RESULT**!\t\t\n\n\n";


         file>>classes>>rId>>theSubject>>theResult;
        std::string x = rId;
        while(file>>classes>>rId>>theSubject>>theResult){


            if(classes==classes1){

            cout <<rId<<' '<<theSubject<<' '<<theResult<<endl;


                    if (x != rId){
                            x = rId;
                        totalCount++;
                    }

                  }








        }

            //failCount= failCount-fcount;
            //passCount= passCount-pcount;
            //totalCount= totalCount-tcount;
       // cout<<"\n\n\n\Total No. of Failed Students:"<<failCount<<endl;
        //cout<<"Total No. of Passed Students:"<<passCount<<endl;
        cout<<"Total No. of Students:"<<totalCount<<endl;
        cout<<endl;






        cout << "\n\n\nRECORD PRINTED IF FOUND"<<endl;
        file.close();
}








void schoolResult()
{

    string rId;//for Registration No number
string classes;
    fstream file("resultInfo.txt");
    //for Registration number


        std::string theSubject;
        double theResult;
        int totalCount;

        cout<<endl<<"\t\t\t\t !** SCHOOL RESULT**!\t\t\n\n\n";

         //file>>classes>>rId>>theSubject>>theResult;
            totalCount =1;
        while(file>>classes>>rId>>theSubject>>theResult){
                std::string x = rId;
            cout <<rId<<' '<<theSubject<<' '<<theResult<<endl;


                    while (x != rId){
                            x = rId;
                        ++totalCount;
                        totalCount++;
                    }







        }




//    cout<<"Total No. of Failed Students:"<<failCount<<endl;
  //  cout<<"Total No. of Passed Students:"<<passCount<<endl;
    cout<<"Total No. of Students:"<<totalCount<<endl;
    //cout<<"School Annual Result(%):"<<(double)(100*passCount)/totalCount<<"%";
    cout<<endl;

    cout <<"\n\n\nRESULT PRINTED IF FOUND"<<endl;
}










void deleteResult()
{
        string rId1,classes1;
        string rId,classes;
    cout<<"\n Enter student registration Id:\n";
    cin>>rId1;
    cout<<"\n Enter student Class:\n";
    cin>>classes1;

        string theSubject;
        double theResult;
    fstream infile ("resultInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);

    while (infile>>classes>>rId>>theSubject>>theResult){
        if(rId != rId1){
            tempfile<<classes<<" "<<rId<<" "<<theSubject<<" "<<theResult<<endl;
        }
    }

    infile.close();
    tempfile.close();
    remove("resultInfo.txt");
    rename("tempInfo.txt","resultInfo.txt");

cout<<"\n**student result Successfully deleted**\n";

}





void updateResultAdd()
{
        string rId1,classes1;
        string rId,classes;
    cout<<"\n Enter student registration Id:\n";
    cin>>rId1;
    cout<<"\n Enter student Class:\n";
    cin>>classes1;

        string theSubject;
        double theResult;
    fstream infile ("resultInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);

    cout <<"How many subjects is the student offering : "<<endl;
    cin>>x;

    cout <<"Enter subjects and score respectively"<<endl;
     for (int i=0; i<x;i++){
        std::string theSubject;
        double theResult;
        cin >>theSubject;
        cin >>theResult;
        tempfile<<classes1<<" "<<rId1<<" "<<theSubject<<" "<<theResult<<endl;
    }
    cout<<"\n**student result Successfully UPDATED**\n";

    while (infile>>classes>>rId>>theSubject>>theResult){
        if(rId != rId1){
            tempfile<<classes<<" "<<rId<<" "<<theSubject<<" "<<theResult<<endl;
        }
    }

    infile.close();
    tempfile.close();
    remove("resultInfo.txt");
    rename("tempInfo.txt","resultInfo.txt");



}

void deleteClassResult(){

 string rId1,classes1;
        string rId,classes;
    cout<<"\n Enter Class:\n";
    cin>>classes1;

        string theSubject;
        double theResult;
    fstream infile ("resultInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);

    while (infile>>classes>>rId>>theSubject>>theResult){
        if(classes != classes1){
            tempfile<<classes<<" "<<rId<<" "<<theSubject<<" "<<theResult<<endl;
        }
    }

    infile.close();
    tempfile.close();
    remove("resultInfo.txt");
    rename("tempInfo.txt","resultInfo.txt");



cout<<"\n**Class result Successfully deleted**\n";


}


#endif // MYRESULT_H
