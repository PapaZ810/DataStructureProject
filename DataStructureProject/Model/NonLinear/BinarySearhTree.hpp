//
//  BinarySearhTree.hpp
//  DataStructureProject
//
//  Created by Durham, Zachary on 4/16/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinarySearhTree_h
#define BinarySearhTree_h


#include "Tree.hpp"
#include <iostream>

using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    void destroyTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    
    void inOrderTraversal();
    void postOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMaximum();
    Type findMinumum();
};

template <class Type>
Int BinaryTreeNode<Type> :: getHeight()
{
    Return - 1;
}

template <class Type>
Int BinaryTreeNode<Type> :: getSize()
{
    Return - 1;
}

template <class Type>
Bool BinaryTreeNode<Type> :: isComplete()
{
    Return false;
}

template <class Type>
Bool BinaryTreeNode<Type> :: isBalanced()
{
    Return false;
}

template <class Type>
Void BinaryTreeNode<Type> :: inOrderTraversal()
{
    
}

template <class Type>
Void BinaryTreeNode<Type> :: preOrderTraversal()
{
    
}

template <class Type>
Void BinaryTreeNode<Type> :: postOrderTraversal()
{
    
}

template <class Type>
Void BinaryTreeNode<Type> :: insert(Type item)
{
    
}

template <class Type>
Bool BinaryTreeNode<Type> :: contains(Type value)
{
    
}

template <class Type>
Void BinaryTreeNode<Type> :: remove(Type item)
{
    
}


#endif /* BinarySearhTree_h */
