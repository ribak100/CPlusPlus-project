#include <iostream>
#include "QueuePtr.h"

using namespace std;

int main()
{
    /*QueuePtr<int> myQueue;

    myQueue.enqueue(3);
    myQueue.enqueue(2);
    QueuePtr<int> myQueue2;
    myQueue2 = myQueue;

    int x;
     myQueue.dequeue(x);
    cout << x<<endl;
    myQueue.getFront(x);
    cout << x<<endl;

    myQueue.dequeue();
    myQueue.dequeue();
    cout <<myQueue.isEmpty()<<endl;

    cout <<myQueue2.isEmpty()<<endl;
    int g;
    myQueue2.getFront(g);
    cout << g<<endl;

    int y;
    myQueue2.dequeue(y);
    cout << y<<endl;
    int y2;
    myQueue2.dequeue(y2);
    cout << y2<<endl;
*/

    QueuePtr<string> myQue;

    string pass[1];
    cout << "enter a string : ";
    cin >> pass[0];
    myQue.enqueue(pass[0]);

    if(pass[0] == "hidden")
    {
        cout <<"correct";
    }
    else
    {
        cout <<"wrong";
    }


    return 0;
}
