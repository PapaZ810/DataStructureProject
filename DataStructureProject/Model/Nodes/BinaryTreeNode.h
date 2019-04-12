//
//  BinaryTreeNode.h
//  DataStructureProject
//
//  Created by Durham, Zachary on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_h
#define BinaryTreeNode_h

#include "Node.hpp"

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * leftChild;
    BinaryTreeNode<Type> * rightChild;
public:
    BinaryTreeNode<Type>();
    BinaryTreeNode<Type>(Type);
    
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setLeftChild(BinaryTreeNode<Type> * leftChild);
    void setRightChild(BinaryTreeNode<Type> * rightChild);
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>()
{
    root = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this->root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()
{
    return this->right;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
{
    return this->left;
}

template <class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot)
{
    root = newRoot;
}

template <class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> * right)
{
    this->right = right;
}

template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> * left)
{
    this->left = left;
}



#endif /* BinaryTreeNode_h */
