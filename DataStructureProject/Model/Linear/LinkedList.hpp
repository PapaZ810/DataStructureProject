//
//  LinkedList.hpp
//  DataStructureProject
//
//  Created by Durham, Zachary on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include "List.hpp"

using namespace std;

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    LinkedList();
    virtual ~LinkedList();
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    virtual void add(Type item);
    virtual void addAtIndex(int index, Type item);
    virtual Type getFromIndex(int index);
    virtual Type remove(int index);
    
    bool contains(Type item);
};

template <class Type>
LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->size = 0;
}

template <class Type>
LinkedList<Type> :: ~LinkedList()\
{
    LinkedList<Type> * destroyStructure = front;
    while (front != nullptr)
    {
        front = destroyStructure->getNextNode();
        delete destroyStructure;
        destroyStructure = front;
    }
}

template <class Type>
void LinkedList<Type> :: add(Type item)
{
    LinkedList<Type> * newData =new LinkedList<Type>(item)
    
    if(this->size == 0)
    {
        this->front = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    this->end = newData;
    
    this->size += 1;
}

template <class Type>
void LinkedList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this->size)
    {
        add(item);
    }
    else
    {
        LinkedList<Type> :: toBeAdded = new LinkedList<Type>(item);
        if(index == 0)
        {
            tobeAdded->setNExtNode(front);
            front = toBeAdded;
        }
        else
        {
            LinkedList<Type> * previous = nullptr;
            LinkedList<Type> * current = front;
            for(int position = 0; position < index; position ++)
            {
                previous = current;
                current = current->getNextNode();
            }
            previous->setNextNode(toBeAdded);
            toBeAdded->SetNExtNode(current);
        }
        this->size++;
    }
}

template <class Type>
Type LinkedList<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < this->size);
    Type data;
    
    LinkedList<Type> * current = front;
    
    for(int position = 0; position < index; position++)
    {
        current = current->getNextNode();
    }
    data = current->getData();
    
    return data;
}

template <class Type>
Type LinkedList<Type> :: remove(int index)
{
    assert(index >= 0 && index < this->size);
    
    LinkedList<Type> * current = front;
    LinkedList<Type> * toBeRemoved = nullptr;
    LinkedList<Type> * previous = nullptr;
    
    Type removedData;
    
    if (index == 0)
    {
        toBeRemoved = front;
        this->front = this->front->getNextNode();
    }
    else
    {
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNextNode();
        }
        
        toBeRemoved = current;
        
        if(index == this->size - 1)
        {
            previous->setNextNode(nullptr);
            end = previous;
        }
        else
        {
            current = toBeRemoved->getNextNode();
            previous->setNextNode(current);
        }
    }
    this->size -= 1;
    
    removedData = toBeRemoved->getData();
    delete toBeRemoved;
    return removedData;
}

template <class Type>
LinearNode<Type> * LinkedList<Type> :: getEnd();
{
    return this->end;
}

template <class Type>
LinearNode<Type> * LinkedList<Type> :: getFront()
{
    return this->front;
}

template <class Type>
int LinkedList<Type> :: getSize() const
{
    return this->size;
}

template <class Type>
bool LinkedList<Type> :: contains(Type thingToFind)
{
    bool exists = false;
    
    LinearNode<Type> * searchPointer = front;
    
    for (int index = 0; index < getSize(); index++)
    {
        if (searchPointer->getData() == thingToFind)
        {
            return true;
        }
        searchPointer = searchPointer->getNextNode();
    }
    return exists;
}

#endif /* LinkedList_h */
