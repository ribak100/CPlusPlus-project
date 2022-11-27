#include <iostream>
#include "QueuePtr.h"
#include "StackPtr.h"

using namespace std;
QueuePtr<char> myQueue, myQueue1, myQueue2;
StackPtr<char> myStack;

bool palindromeStackQueue();

int main()
{

	palindromeStackQueue();



	return 0;

}

bool palindromeStackQueue()
{
	cout << "how many letters does the word has" <<endl;
	int x;
	cin >>x;
	for(int i= 1; i<x; i++){
		char y;
		myQueue.enqueue(y);
		myStack.push(y);
	}
	myQueue1 = myQueue;
	myQueue2 = myQueue;

	char q,s;

	myQueue.getFront(q);
	myStack.getTop(s);

	while((!myQueue.isEmpty)&&(q==s)){
		myQueue.getFront(q);
		myStack.getTop(s);
		if(q==s){
			myQueue.dequeue();
			myStack.pop();


	while(! myQueue.isEmpty){
		char x;
		myQueue1.dequeue(x);
		cout<<x;
	}
	cout<< " is a palindrome"<<endl;
		}

	else if(q != s){
		while(! myQueue.isEmpty){
			char m;
			myQueue2.dequeue(m);
			cout <<m;
		}
		cout <<" is a palindrome"<<endl;
	}
	}




}
