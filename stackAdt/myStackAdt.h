#ifndef MYSTACKADT_H
#define MYSTACKADT_H
#include "exception.h"

const int MAX_STACK = 10;
template <class T>
class myStackAdt
{

  private:

        T data[MAX_STACK];
        int top;


    public:


        myStackAdt(): top(-1){} // my default constructor


        bool isEmpty()const{ // check if stack is empty
            return top < 0;
        }


        void push(const T& newItem) // insert an element into the stack
        {
            if (top >= MAX_STACK - 1){
                std::cout <<"stackException: you cant push any more item, stack is full"<<std::endl;

                throw stackException("stackException: you can't push any more item, stack is full");
            }
            else{
                data[++top]= newItem;

                }
        }

        void pop() //remove the top of the stack
        {
            if (isEmpty()){
                std::cout <<"stackException: stack is empty"<<std::endl;
                throw stackException("stackException: stack is empty");
                }
            else{
                --top;
                }
        }

            void topAndPop(T& stackTop) // remove the value of the top of the stack
            {
                if(isEmpty()){
                    std::cout << "stackException: stack empty on pop"<<std::endl;
                    throw stackException("stackException: stack empty on pop");

                    }
                else{
                    stackTop = data[top--];
                    }
            }

            void getTop(T& stackTop)const // get the value of the top of the stack
            {
                if (isEmpty()){
                    std::cout << "stackException: stack is empty on getTop"<<std::endl;
                    throw stackException("stackException: stack is empty on getTop");

                }
                    else{
                    stackTop = data[top];
                    }
            }
    };









/*        myStackAdt(); //my default constructor
        bool isEmpty()const; // a boolean that determine if the stack is empty
        void push(const T& newItem); //add a new item to top of the stack
        void pop(); //remove the top of the stack
        void topAndPop(T& stackTop);
        void getTop(T& stackTop)const; // get the value of the top of the stack

*/





#endif // MYSTACKADT_H
