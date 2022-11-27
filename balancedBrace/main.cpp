#include <iostream>
#include "QueuePtr.h"
#include "windows.h"
#include "StackPtr.h"

using namespace std;

bool balancedBrace();

int main()
{
    balancedBrace();

    return 0;
}


bool balancedBrace()
{
    StackPtr<char> myStack;
    char balancedSoFar = true;
    char x;
    cout << "enter your text and enter '%' when you are done"<<endl;

    //cin >>x;
    while(x != '%'){
            cin >>x;
        if (x == '{'){
            myStack.push(x);

        }
        else if(x =='}'){
            if(! myStack.isEmpty()){
                myStack.pop();
            }

            else {
                balancedSoFar = false;
            }
        }
    }
        if (balancedSoFar && myStack.isEmpty()){

            int top = -1;
            QueuePtr<char> myChar;
            char arr[] = {'t','h','e',' ','t','e','x','t',' ','h','a','s',' ','a',' ','b','a','l','a','n','c','e','d',' ', 'b','r','a','c','e'};
            for(int i = 0; i < 29; i++){
                char x = arr[++top];
                myChar.enqueue(x);
            }
            while(! myChar.isEmpty()){
                char y;
                Sleep(10);
                myChar.dequeue(y);
                Sleep(100);
                cout <<y;

            //cout << "the text entered has balanced brace"<<endl;

        }
        }
        else{
              int top = -1;
            QueuePtr<char> myChar;
            char arr[] = {'t','h','e',' ','t','e','x','t',' ','d','o','e','s', ' ' ,'n' ,'o','t',' ','h','a','v','e',' ','a',' ','b','a','l','a','n','c','e','d',' ', 'b','r','a','c','e'};
            for(int i = 0; i < 39; i++){
                char x = arr[++top];
                myChar.enqueue(x);
            }
            while(! myChar.isEmpty()){
                char y;
                Sleep(10);
                myChar.dequeue(y);
                Sleep(100);
                cout <<y;

            //cout <<  "the text entered does not have a balanced brace"<<endl;
            }
        }





    return balancedSoFar;
}
