#include "StackPtr.h"
#include "QueuePtr.h"
#include "windows.h"
#include "NodePtr.h"
#include <iostream>
//#define NDEBUG
#include <cassert>

using namespace std;

    StackPtr<char> myStack;
    StackPtr<char> myStack2;
    StackPtr<char> myStack3;



    //precondition: user must enter a character to input and a backspace character(~) to delete and a mod(%) character to end
    //postcondition: it read in inputs and correct and print out in reverse(LIFO);
    void readAndCorrect(){
    cout <<"read and correct input: Enter a character or a backspace character(~) and enter '%' to end"<<endl;

    char mychar;
    cin >> mychar;

    //assert(mychar != '%');
    while (mychar != '%'){
    if (mychar == '~'){
         if (! myStack.isEmpty()){
            myStack.pop();
         }
    }
    else{
        myStack.push(mychar);
        }
        cin >> mychar;
      }
    myStack3 = myStack;

    cout << "printing out "<<endl;
    while(! myStack.isEmpty()){

        char print;
        myStack.topAndPop(print);

        myStack2.push(print);


    }

    while (! myStack2.isEmpty()){
        char  rprint;
        Sleep(200);
        myStack2.topAndPop(rprint);
        cout<< rprint;
    }
        cout <<endl<< "\n\nBONUS: printing out in reverse :)"<<endl;
        while(! myStack3.isEmpty()){

        char print;
        myStack3.topAndPop(print);
        Sleep(200);
        cout << print;

        }

    }
int main()
{


    readAndCorrect();




    return 0;
}
