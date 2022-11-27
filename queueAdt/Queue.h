#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include "queueException.h"

using namespace std;

const int max_queue = 10;

template <class T>
class Queue
{
    public:
        Queue();
       // ~Queue();
        bool isEmpty();
        bool isFull();
        void enqueue(const T& newItem);
        void dequeue();
        void dequeue(T& queueFront);
        void getFront(T& queueFront);


    private:
        int Front;
        int Back;
        int Count;
        T item[max_queue];
};


template <class T>
Queue<T>::Queue() : Front(0), Back(max_queue -1) ,Count(0){}


template <class T>
bool Queue<T>::isEmpty()
{

    return Count == 0;

}


template <class T>
bool Queue<T>::isFull()
{
    return Count == max_queue;
}


template <class T>
 void Queue<T>::enqueue(const T& newItem)
 {
     if (isFull()){
        cout << "QueueException: queue is full on enqueue"<<endl;
     }

     else{
     Back = (Back + 1)% max_queue;
     item[Back] = newItem;
     ++Count;
     }
 }


template <class T>
void Queue<T>::dequeue()
{
    if(isEmpty()){
        cout << "QueueException: queue is empty on dequeue"<<endl;
    }
    else{

        Front = (Front +1 )% max_queue;
        --Count;
    }

}


template <class T>
void Queue<T>::dequeue(T& queueFront)
{
    if (isEmpty()){
        cout << "QueueException: queue is empty on dequeue"<<endl;
    }
    else{
    queueFront = item[Front];
    Front = (Front + 1) % max_queue;
    --Count;
    }
}


template <class T>
void Queue<T>::getFront(T& queueFront)
{
    if (isEmpty()){
        cout << "QueueException: queue is empty on getFront"<<endl;
    }
    else{

        queueFront = item[Front];
    }
}




#endif // QUEUE_H
