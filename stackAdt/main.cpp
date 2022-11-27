#include <iostream>
#include "myStackAdt.h"
#include "exception.h"



int main()
{
    myStackAdt<int> myStack;
    std::cout << "enter the values to be store in my stack : "<< std::endl;
    for (int i =0; i < 10; i++){
        int print;
        std::cin >> print;
        myStack.push(print);
    };

    std::cout << "printing values in reverse order : " << std::endl;
    while (! myStack.isEmpty()){

        int value;

        myStack.topAndPop(value);
        std::cout<< value<<std::endl;
    }


/*
    std::cout<< "i have pop the last value so the top would be second to the last"<< std::endl;
    myStack.pop();
    myStack.pop();
    myStack.pop();
    std::cout << "the top of the stack is : "<<std::endl;
    int x;
     myStack.getTop(x);
    std::cout <<x;
*/

/*
    myStackAdt<double> myStack2;

    myStack2.push(23.242);
    myStack2.push(23.242);
    myStack2.pop();
    myStack2.pop();
    myStack2.pop();
    std::cout<< myStack2.isEmpty();

*/

    return 0;
}
