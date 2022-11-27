#ifndef EXAMPTRSTACK_H
#define EXAMPTRSTACK_H
#include <iostream>
#include "NodePtr.h"

using namespace std;

template <class T>
class StackPtr
{
        StackPtr();
        //StackPtr(const StackPtr& rhs);
        ~StackPtr();
        //StackPtr& operator = (const StackPtr& rhs);
        bool isEmpty()const;
        void push(const T& newItem);
        void pop();
        void topAndPop(T& stackTop);
        void getTop(T& stackTop);


};

tem






#endif // EXAMPTRSTACK_H

