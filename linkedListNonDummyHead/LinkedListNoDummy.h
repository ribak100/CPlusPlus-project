#ifndef LINKEDLISTNODUMMY_H
#define LINKEDLISTNODUMMY_H
#include <iostream>
#include "LinkedNoDummyNode.h"

using namespace std;


template <class T>
class LinkedListNoDummy
{
    public:
        LinkedListNoDummy();
        //LinkedListNoDummy(const LinkedListNoDummy& rhs);
       // ~LinkedListNoDummy();
        //LinkedListNoDummy& operator =(const LinkedListNoDummy& rhs);
        void insert(const T& newItem , NoDummyNode<T>* p);
       //void remove(const T& data);
        bool isEmpty ();
        //void first();
        //void find(const T& data);
        //void findPrevious(const T& data);
        //void print()const();
        //void makeEmpty();



    private:
        NoDummyNode<T>* head;
};

template <class T>
LinkedListNoDummy<T>::LinkedListNoDummy(): head(NULL){}


template <class T>
bool LinkedListNoDummy<T>::isEmpty ()
{

    return head == NULL;
}



        //LinkedListNoDummy(const LinkedListNoDummy& rhs);



       // ~LinkedListNoDummy();



        //LinkedListNoDummy& operator =(const LinkedListNoDummy& rhs);


template <class T>
void LinkedListNoDummy<T>::insert(const T& newItem , NoDummyNode<T>* p)
{
    if(p!= NULL){ //i.e if its not empty
    NoDummyNode<T>* newNode = new NoDummyNode<T>(newItem, p->next);
    p->next = newNode;
    }
    else{
        NoDummyNode<T>* newNode = new NoDummyNode<T>(newItem, head);
        head = newNode;
    }
}



       //void remove(const T& data);




        //void first();



        //void find(const T& data);



        //void findPrevious(const T& data);



        //void print()const();



        //void makeEmpty();














#endif // LINKEDLISTNODUMMY_H
