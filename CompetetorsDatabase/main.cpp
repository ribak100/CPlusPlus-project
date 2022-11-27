#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<direct.h>
#include<process.h>
#include<windows.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
#include<time.h>
#include <tchar.h>

#include "student.h"
#include "staff.h"
#include "myresult.h"
#include "fee.h"
#include "encryption.h"
using namespace std;

int login();      // function for loginscreen
void mainpage();  // function to display mainpage
void date1();     // to get current date
void delay();     // function for loading effect
void callExit();
int changePassword();
void pass();
void createPassword();
int trueLogin();
void slowDemDown();
int isEmpty(std::ifstream& pFile);
//void startUp(int argc, TCHAR *argv[]);

void callExit()
{
  int process = 0;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  cout << "\n\t\t\t\t\t\t\tTaking You Out of The System";
  for(process=0;process<25;process++)
    {
      delay();
      cout <<".";
    }
  system("cls");
  cout <<"\n\n\n\n\n\n\n\n\n\n\n";
  cout <<"\t\t\t\t\t";
  cout <<"You are out of the System.\n";
  cout <<"\t\t\t\t\t\t";
  cout << "Thank You !";
  cout <<"\n\n";
  cout <<"\t\t\t\t\t";
  system("pause");
  exit(0);
}

int menu()

{
    system("cls");
    int choice;
    for(;;)
    {

            cout <<endl<<endl;
             cout <<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    ---------------------------------------------\n";
             cout <<"\t\t\t\t\t\t    |     WELCOME TO SCHOOL MANAGEMENT SYSTEM     |\n";
            cout <<"\t\t\t\t\t\t    -----------------------------------------------\n";
            cout << "\t\t\t\t\t\t\t\t1. STUDENT INFORMATION"<< endl;
            cout << "\t\t\t\t\t\t\t\t2. STAFF INFORMATION"<< endl;
            cout << "\t\t\t\t\t\t\t\t3. RESULT INFORMATION"<< endl;
            cout << "\t\t\t\t\t\t\t\t4. FEE STRUCTURE"<< endl;
            cout << "\t\t\t\t\t\t\t\t5. EXIT"<< endl;
            cout << "\t\t\t\t\t\t\t\tENTER YOUR CHOICE : ";
            cin>>choice;
            switch(choice)
            {
                case 1:
                            system("cls");
                            char studentC;
                            cout <<endl<<endl;
             cout <<"\n\n\n\n\n\n\n\n\n\n"
                 <<"\t\t\t\t\t\t    ---------------------------------------------\n";
             cout <<"\t\t\t\t\t\t    |         STUDENT DATA MANAGEMENT            |\n";
            cout <<"\t\t\t\t\t\t    -----------------------------------------------\n";
                            cout << "\t\t\t\t\t\t\t\t1. NEW REGISTRATION"<< endl;
                            cout << "\t\t\t\t\t\t\t\t2. UPDATE STUDENT INFORMATION"<< endl;
                            cout << "\t\t\t\t\t\t\t\t3. DELETE STUDENT INFORMATION"<< endl;
                            cout << "\t\t\t\t\t\t\t\t4. LIST ALL STUDENTS"<< endl;
                            cout << "\t\t\t\t\t\t\t\t5. EXIT"<< endl;
                            cout << "\t\t\t\t\t\t\t\tENTER YOUR CHOICE : ";
                            cin>>studentC;
                            switch(studentC)
                            {
                                case '1':
                                    system("cls");
                                    newStudentRegistration();
                                    break;
                                case '2':
                                    system("cls");
                                    updateStudentInform();
                                    break;
                                case '3':
                                    system("cls");
                                    deleteStudentInform();
                                    break;
                                case '4':
                                    system("cls");
                                    listOfStudents();
                                    break;
                                case '5':callExit();
                                break;
                                default:
                                        cout<<"wrong option, please retry";
                                        break;
                            }
                    break;
                case 2:
                            system("cls");
                            int staffC;

                                             cout <<endl<<endl;
             cout <<"\n\n\n\n\n\n\n\n\n\n"
                 <<"\t\t\t\t\t\t    ---------------------------------------------\n";
             cout <<"\t\t\t\t\t\t    |         STAFF DATA MANAGEMENT            |\n";
            cout <<"\t\t\t\t\t\t    -----------------------------------------------\n";
                            cout << "\t\t\t\t\t\t\t\t1. New Registration"<< endl;
                            cout << "\t\t\t\t\t\t\t\t2. Update staff information"<< endl;
                            cout << "\t\t\t\t\t\t\t\t3. Delete staff information"<< endl;
                            cout << "\t\t\t\t\t\t\t\t4. List All staffs"<< endl;
                            cout << "\t\t\t\t\t\t\t\t5. Exit"<< endl;
                            cout << "\t\t\t\t\t\t\t\tEnter your choice:";
                            cin>>staffC;
                            switch(staffC)
                            {
                            case 1:
                                system("cls");
                                newStaffRegistration();
                                break;
                            case 2:
                                system("cls");
                                    updateStaffInform();
                                    break;
                            case 3:
                                system("cls");
                                    deleteStaffInform();
                                    break;
                            case 4:
                                system("cls");
                                    listOfStaffs();
                                    break;

                            case 5:callExit();
                            break;
                            default:
                                    cout<<"wrong option, please retry";
                            }
                    break;

                case 3:
                    system("cls");

                            int resultC;
                                                            cout <<endl<<endl;
             cout <<"\n\n\n\n\n\n\n\n\n\n"
                 <<"\t\t\t\t\t\t    ---------------------------------------------\n";
             cout <<"\t\t\t\t\t\t    |        STUDENT RESULT MANAGEMENT          |\n";
            cout <<"\t\t\t\t\t\t    -----------------------------------------------\n";
                            cout << "\t\t\t\t\t\t\t\t1. Add Result "<< endl;
                            cout << "\t\t\t\t\t\t\t\t2. Update Result"<< endl;
                            cout << "\t\t\t\t\t\t\t\t3. Delete Result"<< endl;
                            cout << "\t\t\t\t\t\t\t\t4. Delete class Result"<< endl;
                            cout << "\t\t\t\t\t\t\t\t5. Over All class Result"<< endl;
                            cout << "\t\t\t\t\t\t\t\t6. School Annual Result"<< endl;
                            cout << "\t\t\t\t\t\t\t\t7. Student Result"<< endl;
                            cout << "\t\t\t\t\t\t\t\t8. Exit"<< endl;
                            cout << "\t\t\t\t\t\t\t\tEnter your choice:";
                            cin>>resultC;
                            switch(resultC)
                            {
                            case 1:
                                system("cls");

                                    newResultAdd();
                                    break;
                            case 2:
                                system("cls");
                                    updateResultAdd();
                                    break;
                            case 3:
                                system("cls");
                                    deleteResult();
                                    break;
                            case 4:
                                system("cls");
                                    deleteClassResult();
                                    break;
                            case 5:
                                system("cls");
                                   overAllClassResult();
                                    break;
                            case 6:
                                system("cls");
                                    schoolResult();
                                    break;
                            case 7:
                                system("cls");
                                    studentResult();
                                    break;
                            case 8:callExit();
                                break;
                                default:
                                        cout<<"wrong option, please retry";
                            }


                    break;
                case 4:
                    system("cls");
                            int feeC;
                                                            cout <<endl<<endl;
             cout <<"\n\n\n\n\n\n\n\n\n\n"
                 <<"\t\t\t\t\t\t    ---------------------------------------------\n";
             cout <<"\t\t\t\t\t\t    |         FEE MANAGEMENT            |\n";
            cout <<"\t\t\t\t\t\t    -----------------------------------------------\n";
                            cout << "\t\t\t\t\t\t\t\t1. Add New Fee"<< endl;
                            cout << "\t\t\t\t\t\t\t\t2. Update Fee Information"<< endl;
                            cout << "\t\t\t\t\t\t\t\t3. Delete Fee information"<< endl;
                            cout << "\t\t\t\t\t\t\t\t4. List All Fees"<< endl;
                            cout << "\t\t\t\t\t\t\t\t5. Exit"<< endl;
                            cout << "\t\t\t\t\t\t\t\tEnter your choice:";
                            cin>>feeC;
                            switch(feeC)
                            {
                                case 1:
                                    system("cls");
                                    addFee();
                                    break;
                                case 2:
                                    system("cls");
                                    updateFee();
                                    break;
                                case 3:
                                    system("cls");
                                    deleteFee();
                                    break;
                                case 4:
                                    system("cls");
                                    listAllFees();
                                    break;
                                case 5:
                                    system("cls");
                                   callExit();
                                    break;
                                default:
                                    cout<<"wrong option, please retry";
                            }
                            break;
                case 5:callExit();
                        break;
                default:cout<<"wrong entry, please re-try";
            }
    }
    return 0;
}


void date1()
{
  time_t T= time(NULL);
  struct  tm tm = *localtime(&T);
  cout << "\n\n\n";
  cout << "\t\t\t\t\t   Date:" << tm.tm_mday << "/" << tm.tm_mon+1  << "/" << tm.tm_year+1900 << "\n";
}



void mainpage()
{
  int process=0;
  system("cls");
  date1();
  cout << "\n";
  cout <<"\t\t\t\t    ----------------------------------\n";
  cout <<"\t\t\t\t    |    SCHOOL MANAGEMENT SYSTEM     |\n";
  cout <<"\t\t\t\t    ----------------------------------\n";
  cout <<"\n\n";
  cout <<"\t\t\t\t";
  cout <<"PREPARED BY    ";
  cout <<":";
  cout <<"   HIDDEN";
  cout <<"\n\n";
  cout <<"\t\t\t\t";
  cout <<"PROJECT   ";
  cout <<":";
  cout <<"   School Management System";
  cout <<"\n\n";
  cout <<"\t\t\t\t";
  cout <<"\n\n";
  cout <<"\n\n";
  cout <<"\t\t\t\t";
  system("pause");
  cout <<"\n\t\t\t\tLoading";

  for(process=0;process<25;process++)
  {
    delay();
    cout <<".";
  }
}



/*
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
*/
void delay()
{
    Sleep(200);
}

/*
int login()
{
  char username[30];
  char password[30];
  int true1 = 1;
  int try1 = 0;
  int i=0;
  do
  {
    system("cls");
    cout << "\n\n\n\n\n\n";
    cout <<"\t\t\t\t    ----------------------------------\n";
    cout <<"\t\t\t\t    |    SCHOOL MANAGEMENT SYSTEM      |\n";
    cout <<"\t\t\t\t    ----------------------------------\n";
    cout <<"\n\n";
    cout << "\t\t\t\t\t";
    cout << "Username : ";
    cin >> username;
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Password : ";
    cin >> password;
    if(strcmp(username,"admin")==0 && strcmp(password,"pass")==0)
      {
        cout << "\n\n";
        cout << "\t\t\t\t";
        cout << "ACCESS GRANTED!\n\n";
        cout << "\t\t\t\t";
        system("pause");
        system("cls");
        true1 = 0;
        return 1;
      }
      else
      {
        system("cls");
        try1 = try1+1;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t";
        cout << "No. of attempts remain: " << 3-try1;
        cout << "\n\n";
        cout << "\t\t\t\t";
        system("pause");
        if(try1>=3)
        {

          cout << "\t\t\t\t\t\t";
          cout << "\n";
          cout << "\t\t\t\t";
          cout << "No permission to enter the system!\n\n";
          cout << "\t\t\t\t";
          system("pause");
          callExit();
        }
      } //END OF ELSE
    }
 while(try1<3);
}
*/

int main()
{
  system("cls");
  mainpage();
  /*
  int x,res=1;
  res = login();

  if(res == 1)
  {
    menu();

  }
  */
  pass();
}



void createPassword()
{
    string username;
    string password;
    string user;//for Registration No number
    string pass;
    fstream outfile ("mylogin.txt",ios::app);
    int key;

      system("cls");
    cout << "\n\n\n\n\n\n";
    cout <<"\t\t\t\t    ----------------------------------\n";
    cout <<"\t\t\t\t    |    CREATE A NEW LOGIN DETAILS     |\n";
    cout <<"\t\t\t\t    ----------------------------------\n";
    cout <<"\n\n";
    cout << "\t\t\t\t\t";
    cout <<"ENTER NEW USERNAME AND PASSWORD\n\n\n\n\n"<<endl;
    cout <<"\n\n";
    cout << "\t\t\t\t\t";
    cout << "USERNAME : ";
    cin >> username;
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\n\n\n\t\t\t\t\t";
    cout << "PASSWORD : ";
    cin>>password;
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\n\n\n\t\t\t\t\t";
    cout << "ENCRYPTION KEY : ";
    cin>>key;

        user = encrypt(username,key);
        pass = encrypt(password,key);
         outfile.seekg(0, ios::end);
    if (outfile.tellg()==0){
        outfile<<user<<" "<<pass<<endl;

    cout<<"\n\t\t\t\t\t\t**PASSWORD SUCCESSFULLY CREATED**\n";

    }
    else{

        cout <<"THERE IS AN EXIXTING PASSWORD, USE THE LOGIN OR CHANGE PASSWORD INSTEAD"<<endl;

    }

    outfile.close();
    return;

}




int changePassword()
{


    int try1 = 0;
    //int count = 0;

  do
    {

    system("cls");

    fstream infile ("mylogin.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string username;//for Registration No number
    string password;
    string vUsername;
    string vPassword;
    int key;

    cout << "\n\n\n\n\n\n";
    cout <<"\t\t\t\t    ----------------------------------\n";
    cout <<"\t\t\t\t    |    CHANGE LOGIN DETAILS      |\n";
    cout <<"\t\t\t\t    ----------------------------------\n";
    cout <<"\n\n";
    cout << "\t\t\tMAKE SURE YOU HAVE AN EXISTING PASWORD, OR YOU WONT BE ALLOWED TO PASS THIS WINDOW"<<endl;
      cout <<"\t\t\t\t\t\tEXIT IF YOU ARE DONE"<<endl;
    cout <<"\n\n";
    cout << "\t\t\t\t\t";
    cout <<"ENTER PREVIOUS USERNAME AND PASSWORD\n\n\n\n\n"<<endl;
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "USERNAME : ";
    cin >> username;
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "PASSWORD : ";
    cin>>password;
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\n\n\n\t\t\t\t\t";
    cout << "DECRYPTION KEY : ";
    cin>>key;

            string user, pass;

            //infile.seekg(0, ios::end);
            while(infile>>vUsername>>vPassword){
                    user = decrypt(vUsername,key);
                    pass = decrypt(vPassword,key);
             if((username==user) && (password==pass))
                {
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            cout <<"ENTER NEW USERNAME : ";
            string newUser;
            cin >>newUser;
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            cout <<"ENTER NEW PASSWORD : ";
            string newPass;
            cin >> newPass;
             cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\n\t\t\t\t\t";
            cout << "ENTER NEW ENCRYPTION KEY : ";
            cin>>key;

            string encNewUser= encrypt(newUser,key);
            string encNewPass = encrypt(newPass,key);
            tempfile<<encNewUser<<" "<<encNewPass<<endl;
            cout<<"\n\t\t\t\t\t\t\t**PASSWORD UPDATED SUCCESSFULLY **\n";
            cout<<"\n\t\t\t\t\t\t\tYOU CAN NOW USE THE PASSWORD IN THE LOGIN SCERRN\n";
            infile.close();
            tempfile.close();
            remove("mylogin.txt");
            rename("tempInfo.txt","mylogin.txt");
            system("pause");
            system("cls");

            break;
            }
/*
            else if (found){
                cout<<"DOES NOT FOUND EXISTING PASSWORD, CREATE A NEW ONE"<<endl;
                createPassword();
                //break;
            }

*/
            /*else if(count == 5){

                cout <<"IT SEEMS YOU DONT HAVE AN EXISTING PASSWORD, RESTART THE PROGRAM AND CHOOSE CREATE PASSWORD OPTION"<<endl;
            }
            */
            else{
                    cout << "\t\t\t\t\t";
                    cout << "\n";
                    cout << "\t\t\t\t\t";
            cout <<"PASSWORD DOES NOT MATCH EXISTING ONE"<<endl;
                try1 = try1+1;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t";
        cout << "No. of attempts remain: " << 3-try1;
        cout << "\n\n";
        cout << "\t\t\t\t";
        system("pause");
        if(try1>=3)
        {

          cout << "\t\t\t\t\t\t";
          cout << "\n";
          cout << "\t\t\t\t";
          cout << "No permission to enter the system!\n\n";
          cout << "\t\t\t\t";
          system("pause");
          callExit();
        }

            }



            }



      }

 while(try1<3);




}



void pass(){
system("cls");

    cout << "\n\n\n\n\n\n";
    cout <<"\t\t\t\t    ----------------------------------\n";
    cout <<"\t\t\t\t    |            LOGIN PAGE            |\n";
    cout <<"\t\t\t\t    ----------------------------------\n";
    cout <<"\n\n";
    cout << "\t\t\t\t\t IF YOU ALREADY HAVE A LOGIN DETAILS, LOGIN\n\n\n";
    cout << "\t\t\t\t\t";
    cout << "1. CREATE NEW LOGIN DETAILS\n";
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
     cout << "2. LOGIN USING EXISTING DETAILS\n";
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
      cout << "3. CHANGE LOGIN DETAILS\n";
      cout<<"\n";
    cout << "\t\t\t\t\t";
      cout << "4. EXIT\n";
    cout << "\t\t\t\t\t";
    cout <<endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE : ";
  int pas;
  cin >>pas;
  switch(pas){
    case 1:{
        slowDemDown();
        createPassword();
        break;
    }
    case 2:{
        slowDemDown();
        trueLogin();
        break;

    }
    case 3:{
        slowDemDown();
        changePassword();
        break;

    }

    case 4:{
        slowDemDown();
    callExit();
    }
    default:{
    cout << "WRONG INPUT, ENTER A VALID OPTION"<<endl;
    }


  }




}



void slowDemDown(){
system("pause");
system("cls");
  cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tPlease Wait";
  int process = 0;
  for(process=0;process<25;process++)
  {
    delay();
    cout <<".";

  }
}













int trueLogin()
{


    int try1 = 0;
    //int count = 0;

  do
    {

    system("cls");

    fstream infile ("mylogin.txt");
    string username;//for Registration No number
    string password;
    string vUsername;
    string vPassword;

    int key;
    cout << "\n\n\n\n\n\n";
    cout <<"\t\t\t\t    ----------------------------------\n";
    cout <<"\t\t\t\t    |  LOGIN USING EXISTING DETAILS   |\n";
    cout <<"\t\t\t\t    ----------------------------------\n";
    cout <<"\n\n";
    cout << "\t\t\t\t\t";
    cout <<"\n\n";
    cout << "\t\t\t\t\t";
    cout <<"ENTER  USERNAME AND PASSWORD\n\n"<<endl;
     cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\n\n\t\t\t\t\t\t";
    cout << "USERNAME : ";
    cin >> username;
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\n\n\t\t\t\t\t\t";
    cout << "\PASSWORD : ";
    cin>>password;
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\n\n\n\t\t\t\t\t";
    cout << "DECRYPTION KEY : ";
    cin>>key;
    string user,pass;

            //infile.seekg(0, ios::end);
            while(infile>>vUsername>>vPassword){
                     user = decrypt(vUsername,key);
                    pass = decrypt(vPassword,key);
             if((username==user) && (password==pass))
                {
                cout<<"\n\n\t\t\t\t**ACCESS GRANTED !**"<<endl;
                cout<<"\n\n\t\t\t\t**YOU ARE NOW BEING REDIRECTED TO THE MAIN MENU**"<<endl;
                Sleep(2000);
                slowDemDown();
                std::stringstream stream;
                stream <<"DOS.exe";
                system(stream.str().c_str());
                //LPTSTR szCmdLine[] = _tcsdup(TEXT("C:\\Users\\IBRAHIM\\Desktop\\c++\\Malware\\Denial of service(DOS)\\bin\\Debug\\Denial of service(DOS) -L -S" ));
                //startUp(NULL,szCmdLine, /* ... */);
                system("pause");
                menu();
                //break;
            break;
            }


            else{
            cout <<"PASSWORD DOES NOT MATCH EXISTING ONE"<<endl;
                try1 = try1+1;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t";
        cout << "No. of attempts remain: " << 3-try1;
        cout << "\n\n";
        cout << "\t\t\t\t";
        system("pause");
        if(try1>=3)
        {

          cout << "\t\t\t\t\t\t";
          cout << "\n";
          cout << "\t\t\t\t";
          cout << "No permission to enter the system!\n\n";
          cout << "\t\t\t\t";
          system("pause");
          callExit();
        }

            }



            }



      }

 while(try1<3);




}
/*
void startUp(int argc, TCHAR *argv[])
{

    //additional info
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    //set the size of the structure
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi , sizeof(pi));

    if(argc !=2)
    {
        cout <<"usage: cmdline "<<argv[0];
        return;
    }

    //start the program

    if(!CreateProcess(
                    NULL,
                    argv[1],
                    NULL,
                    NULL,
                    FALSE,
                    0,
                    NULL,
                    NULL,
                    &si,
                    &pi
                   ))
       {
           cout <<"Exec failed "<<GetLastError();
           return;
       }

        WaitForSingleObject(pi.hProcess, INFINITE);

        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);

}

*/


