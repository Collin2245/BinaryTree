#include "BinaryTree.hpp"
#include "iostream"

BinaryTree::BinaryTree(int payload)
{
    this->payload = payload;
    this->leftChild = 0;
    this -> rightChild = 0;
}

void BinaryTree::add(int payload)
{
    if(payload <= this->payload)
    {
        //should go to left
        if(!this->leftChild)
        {
            this->leftChild = new BinaryTree(payload);
        }
        else
        {
            this->leftChild->add(payload);
        }
    }
    else
    {
        //should go to right
         if(!this->rightChild)
        {
            this->rightChild = new BinaryTree(payload);
        }
        else
        {
            this->rightChild->add(payload);
        }
    }
    
}

    void BinaryTree::displayInOrder()
    {
        if(!this)
        {
            return;
        }
        this->leftChild->displayInOrder();
        std::cout<<this->payload<<"\n";
        this->rightChild->displayInOrder();
    }

    void BinaryTree::displayPreOrder()
    {
        if(!this)
        {
            return;
        }
        std::cout << this->payload<<"\n";
        this->leftChild->displayPreOrder();
        this->rightChild->displayPreOrder();
    }

    void BinaryTree::displayPostOrder()
    {
        if(!this)
        {
            return;
        }
        this->leftChild->displayPostOrder();
        this->rightChild->displayPostOrder();
        std::cout<<this->payload<<"\n";
    }
