//
//  Array.hpp
//  DataStructureProject
//
//  Created by Durham, Zachary on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <assert.h>
#include <iostream>

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
public:
    Array<Type>(int size);
    
    Array<Type(const Array<type & toCopy);
    ~Array<Type>();
    
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
    };

    template <class Type>
    Array<Type> :: Array(int size)
    {
        assert(size > 0);
        this->size = size;
        
        internalArray = new Type[size];
    }
    
    template <class Type>
    Array<Type> :: Array(const Array<Type> & toCopy)
    {
        this->size = toCopy.getSize();
        
        internalArray = new Type[size];
        
        for(int index = 0; index < size; index++)
        {
            internalArray[index] = toCopy[index];
        }
    }
    
    tempplate <class Type>
    Array<Type> :: ~Array()
    {
        delete [] internalArray;
    }
    
    
    
#endif /* Array_h */
