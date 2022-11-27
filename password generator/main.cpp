/*PASSWORD GENERATOR PROGRAM
 *BY: Abdulkabir
 */

#include <iostream>
#include <ctime>
#include <windows.h>
#include "QueuePtr.h"
#include "StackPtr.h"


using namespace std;

int main()
{
    srand((unsigned) time(NULL));
    int lenght;
    char myPass;
    char passGen[]= {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0','1', '2', '3', '4', '5', '6', '7', '8',
     '9', '0','1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '~', '!', '@', '#', '$', '%', '&', '*',  '_', ';', ':', '"',};

     StackPtr<char> myStack;
     QueuePtr<char> myQueue;
     char choice;

    do{

    cout << "enter your desired password lenght"<<endl;
    cin >> lenght;
    int len;
    if (lenght<4){
            cout << "password too short, require at least 4 characters"<<endl;
            break;
    }
    else if (lenght >= 4){
    //for (int i =0; i<=20;i++){

            if (lenght >= 4 && lenght <= 7){
                    len = lenght -1;
            }
            else if (lenght >= 8 && lenght <=12){
                len = lenght -2;
            }
            else if (lenght >12 ){
                len = lenght -3;
            }
    for (int i =0; i<len; i++){
            //cout << (char) (rand()% ('z' - '0' + 1)+ '0');
            myPass =  (char) (rand()% 26 +'a');
       // myPass = passGen[rand()%90];
        myQueue.enqueue(myPass);
        myStack.push(myPass);

    }

    for (int i =0; i<lenght-len; i++){
        myPass = passGen[rand()%42];
        myQueue.enqueue(myPass);
        myStack.push(myPass);

    }



    cout << "your generated password is"<<endl;
    while(! myQueue.isEmpty()){
        char display;
        myQueue.dequeue(display);
        Sleep(100);
        cout<<display;
    }
    cout << " "<<endl;
    //}
    }

   cout << "do you want the reverse of the password instead"<<endl
   <<"<<<<<< if yes enter 'y' >>>>>>"<<endl
   <<"<<<<<< if no enter 'n' >>>>>>"<<endl;
   char x;
   cin >>x;
   if (x == 'y'){
    while(! myStack.isEmpty()){
        char display;
        myStack.topAndPop(display);
        Sleep(100);
        cout<<display;
    }
        cout << " "<<endl;
   }
   else {
        cout << "the password order remains the same";
   }

   cout<< "would you like to generate another password"<<endl
    <<"<<<<<< if yes enter 'y' >>>>>>"<<endl
   <<"<<<<<< if no enter 'n' >>>>>>"<<endl;


   cin >>choice;

    } while(choice != 'n');

    cout << "**PROGRAM TERMINATED SUCCESSFULLY**"<<endl;


    return 0;
}
