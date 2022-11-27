/*#include <iostream>
#include "myStackAdt.h"
//#include "StackException.h"

using namespace std;

template <class T>
myStackAdt<T>::myStackAdt(): top(-1){
} //default constructor

template <class T>
bool myStackAdt<T>::isEmpty()const{
return top < 0;
}

template <class T>
void myStackAdt<T>::push(const T& newItem)
{
    if (top >= MAX_STACK - 1)
        //throw stackException("stackException: you cant push any more item, stack is full");
        cout <<"stackException: you cant push any more item, stack is full";
    else
        data[++top]= newItem;
}

template <class T>
void myStackAdt<T>::pop()
{
    if (isEmpty())
        //throw stackException("stackException: stack is empty");
        cout <<"stackException: stack is empty";
    else
        --top;
}

template <class T>
void myStackAdt<T>::topAndPop(T& stackTop)
{
    if(isEmpty())
        //throw stackException("stackException: stack empty on pop");
        cout << "stackException: stack empty on pop";
    else
        stackTop = data[top--];
}

template <class T>
void myStackAdt<T>::getTop(T& stackTop)const
{
    if (isEmpty())
       // throw stackException("stackException: stack is empty on getTop");
       cout <<"stackException: stack is empty on getTop";
    else
        stackTop = data[top];
}

*/




























