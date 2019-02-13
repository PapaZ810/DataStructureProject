//
//  Queue.hpp
//  DataStructureProject
//
//  Created by Durham, Zachary on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "LinkedList.hpp"

#include <iostream>
using namespace std;

template <class Type>
class Queue : public LinkedList<Type>
{
public:
    Queue();
    ~Queue();
    
    void enqueue(Type data);
    Type dequeue();
    Type peek();
    void clear();
    
    void add(Type data);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
};

template <class Type>
Queue<Type> :: Queue() : LinkedList<Type>()
{}

template <class Type>
Queue<Type> :: ~Queue()
{
    for(LinearNode<Type> * removed = this->front; removed != nullptr; removed = this->front)
    {
        this->front = removed->getNextNode();
        delete removed;
    }
}

template <class Type>
void Queue<Type> :: enqueue(Type item)
{
    LinearNode<Type> * added = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this->front = added;
    }
    else
    {
        this->end->setNextNode(added);
    }
    this->end = added;
    this->size++;
}

template <class Type>
void Queue<Type> :: addAtIndex(int index, Type item)
{
    assert(index == this->size);
    enqueue(item);
}

template <class Type>
void Queue<Type> :: add(Type item)
{
    enqueue(item);
}

template <class Type>
Type Queue<Type> :: dequeue()
{
    assert(this->size > 0);
    
    Type returned = this->fronty->getData();
    
    LinearNode<Type> * removed = this->front;
    this->front = removed->getNextNode();
    
    delete remove;
    
    this->size =this->size - 1;
    
    return returned;
}

template <class Type>
Type Queue<Type> :: remove(int index)
{
    assert(index == 0);
    return dequeue();
}

template <class Type>
void Queue<Type> :: clear()
{
    while(this->front != nullptr)
    {
        cout << dequeue() << endl;
    }
}

template <class Type>
Type Queue<Type> :: peek()
{
    assert(this->size > 0);
    return this->getFront()->getData();
}

template <class Type>
Type Queue<Type> :: getFromIndex(int index)
{
    assert(index == 0);
    return peek();
}


#endif /* Queue_h */
