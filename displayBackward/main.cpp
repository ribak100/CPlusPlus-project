#include <iostream>
#include "windows.h"
#include "StackPtr.h"

using namespace std;

void displayBackward();

int main()
{

    displayBackward();


    return 0;
}


void displayBackward()
{
    StackPtr<char> myStack;
    char x;
    cout << "enter the word you want to display backward and press '%' when you are done"<<endl;
    cin >>x;
    while(x != '%'){
        myStack.push(x);
        cin >>x;
    }
    while(! myStack.isEmpty()){
        char x;
        myStack.topAndPop(x);
        Sleep(100);
        cout << x;
    }

}
















