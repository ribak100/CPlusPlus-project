// note i didn't use the queue exception because i didn't like the way it terminates,
//you can edit it to use QueueException class if you want
//you just throw the exception and write in your error message
//have fun :)

#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{

    Queue<int> myQueue;

    myQueue.enqueue(4);
    myQueue.enqueue(2);
    myQueue.enqueue(3);
    int value1;
    myQueue.dequeue(value1);
    cout << " 4 == "<< value1<<endl;
    //myQueue.dequeue();
    int value2;
    myQueue.dequeue(value2);
    cout << "2 == "<< value2<<endl;
    cout << myQueue.isEmpty()<<endl;
    cout << myQueue.isFull()<<endl;

    int y;
    myQueue.getFront(y);
    cout << "front = "<<y<<endl;





    return 0;
}
