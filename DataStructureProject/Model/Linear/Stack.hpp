//
//  Stack.hpp
//  DataStructureProject
//
//  Created by Durham, Zachary on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#incude "LinkedList.hpp"

template <class Type>
class Stack : public LinkedList<Type>
{
public:
    Stack();
    ~Stack();
    
    void push(Type data);
    Type pop();
    Type peek();
    
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
}

template <class Type>
Stack<Type> :: Stack() : LinkedList<Type>()
{}

template <class Type>
Stack<Type> :: ~Stack()
{
    while(this->size > 0)
    {
        pop();
    }
}

template <class Type>
void Stack<Type> :: push(Type data)
{
    LinearNode<Type> * add = new LinearNode<Type>(data)
    
    if(this->size == 0)
    {
        this->end = add;
    }
    else
    {
        add->setNextNode(this->front);
    }
    this->front = add;
    this->size++;
}




#endif /* Stack_h */
