#include <iostream>
#include "windows.h"
#include "StackPtr.h"
#include "QueuePtr.h"
#include <string>

using namespace std;

bool palindromesStackQueue();

int main()
{


    palindromesStackQueue();





    return 0;
}

bool palindromesStackQueue()
{
    cout << "how many letters are there in the word"<<endl;
    int x;
    cin >>x;
    QueuePtr<char> myQueue, myQueue1, myQueue2;
    StackPtr<char> myStack;

    cout <<"enter the word you want to check"<<endl;
    for(int i =1; i<=x; i++){
        char x;
        cin >>x;
        myQueue.enqueue(x);
		myStack.push(x);
    }
    myQueue1 = myQueue;
    myQueue2 = myQueue;

    char charAreEqual = true;

    while(! myQueue.isEmpty() && charAreEqual){
        char q,s;
        myQueue.getFront(q);
		myStack.getTop(s);

		if (q == s){
            myQueue.dequeue();
            myStack.pop();
            while(! myQueue1.isEmpty()){
                char m;
                myQueue1.dequeue(m);
                Sleep(200);
                cout <<m;
            }
            cout << " ";
            int top = -1;
            QueuePtr<char> myChar;
            char arr[] = {'i','s',' ','a',' ','p','a','l','i','n','d','r','o','m','e'};
            for(int i = 0; i < 15; i++){
                char x = arr[++top];
                myChar.enqueue(x);
            }
            while(! myChar.isEmpty()){
                char y;
                Sleep(100);
                myChar.dequeue(y);
                cout <<y;
            }
            //cout << " is a palindrome"<<endl;
		}
		else{
            charAreEqual = false;
            while(! myQueue1.isEmpty()){
                char m;
                myQueue1.dequeue(m);
                Sleep(200);
                cout <<m;
		}
		cout << " ";
            int top = -1;
            QueuePtr<char> myChar;
            char arr[] = {'i','s',' ','n','o','t',' ','a',' ','p','a','l','i','n','d','r','o','m','e'};
            for(int i = 0; i < 19; i++){
                char x = arr[++top];
                myChar.enqueue(x);
            }
            while(! myChar.isEmpty()){
                char y;
                Sleep(100);
                myChar.dequeue(y);
                cout <<y;
		//cout << " is not a palindrome"<<endl;
    }
		}
    return charAreEqual;




}
}

