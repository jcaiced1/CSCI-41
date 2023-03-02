//This is a simple version of class template BinarySearchTree
#ifndef _BINARYSEARCH_TREE
#define _BINARYSEARCH_TREE
#include<iostream>
#include "BinaryNode.h"
using namespace std;

template<class ItemType>
class BinarySearchTree
{
private:
	BinaryNode<ItemType> *rootPtr;
protected:
	void inOrderVisit(BinaryNode<ItemType> *treeRoot);
	
	BinaryNode<ItemType> *binarySearchTreeAddHelper(BinaryNode<ItemType> *treeRoot,
		BinaryNode<ItemType> *newNodePtr);
	BinaryNode<ItemType> *getNode(BinaryNode<ItemType> *treeRoot,
		const ItemType &target) const;
	BinaryNode<ItemType> *removeEntry(BinaryNode<ItemType> *treeRoot,
		ItemType &target, bool &success);
	BinaryNode<ItemType> *removeNode(BinaryNode<ItemType> *nodeToBeRemoved);
	BinaryNode<ItemType> *removeLeftMost(BinaryNode<ItemType> *treeRoot,
		ItemType &nodeItem);
public:
	//Constructors
	BinarySearchTree();
	
	//Set and Get functions 
	ItemType getRootItem();
	void setRootItem(const ItemType &rootItem);
	
	//Other member functions
	bool isEmpty() const;
	void displayInorder();
	
	void binarySearchAdd(ItemType &newItem);
	bool binarySearchRemove(ItemType &anItem);
	bool contains(ItemType &item);
};
//Constructor
template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree()
{
	rootPtr = NULL;
}
//Set and get functions for the item in the root
template<class ItemType>
ItemType BinarySearchTree<ItemType>::getRootItem()
{
	if (rootPtr != NULL)
		return rootPtr->getItem();
	else {
		cout << "Empty tree!\n";
		exit(1);
	}
}
template<class ItemType>
void BinarySearchTree<ItemType>::setRootItem(const ItemType &rootItem)
{
	if (rootPtr != NULL)
		rootPtr->setItem(rootItem);
	else
		rootPtr = new BinaryNode<ItemType>(rootItem, NULL, NULL);
}
//Protected functions
template<class ItemType>
void BinarySearchTree<ItemType>::inOrderVisit(BinaryNode<ItemType> *treeRoot)
{
	if (treeRoot== NULL)
		cout << "It is an empty tree!\n";
	else {
		if (treeRoot->getLeftChildPtr() != NULL)
			inOrderVisit(treeRoot->getLeftChildPtr());
		cout << treeRoot->getItem() << endl;
		if (treeRoot->getRightChildPtr() != NULL)
			inOrderVisit(treeRoot->getRightChildPtr());
	}
}
//Other public member functions
template<class ItemType>
bool BinarySearchTree<ItemType>::isEmpty() const
{
	return (rootPtr == NULL);
}
template<class ItemType>
void BinarySearchTree<ItemType>::displayInorder()
{
	inOrderVisit(rootPtr);
}
template<class ItemType>
BinaryNode<ItemType> *BinarySearchTree<ItemType>::binarySearchTreeAddHelper(BinaryNode<ItemType> *treeRoot,
	BinaryNode<ItemType> *newNodePtr)
{
	if(treeRoot==NULL){
		treeRoot=newNodePtr;
	}
	else{
		if(newNodePtr->getItem()<=treeRoot->getItem()){
			treeRoot->setLeftChildPtr(binarySearchTreeAddHelper(treeRoot->getLeftChildPtr(), newNodePtr));
		}
		else{
			treeRoot->setRightChildPtr(binarySearchTreeAddHelper(treeRoot->getRightChildPtr(), newNodePtr));
		}
	}
	return treeRoot;
}
template<class ItemType>
BinaryNode<ItemType> *BinarySearchTree<ItemType>::getNode(BinaryNode<ItemType> *treeRoot,
	const ItemType &target) const
{
	if(treeRoot==NULL)
		return NULL;
	else{
		if(target==treeRoot->getItem())
			return treeRoot;
		else{
			BinaryNode<ItemType> *nodePtr = getNode(treeRoot->getLeftChildPtr(), target);
			if(nodePtr==NULL)
				nodePtr=getNode(treeRoot->getRightChildPtr(), target);
			return nodePtr;
		}
	}
}
template<class ItemType>
void BinarySearchTree<ItemType>::binarySearchAdd(ItemType &newItem)
{
	BinaryNode<ItemType> *newNodePtr=new BinaryNode<ItemType>(newItem);
	rootPtr=binarySearchTreeAddHelper(rootPtr, newNodePtr);
}
template<class ItemType>
BinaryNode<ItemType> *BinarySearchTree<ItemType>::removeEntry(BinaryNode<ItemType> *treeRoot,
	ItemType &target, bool &success)
{
	if (treeRoot ==NULL){
		success = false;
		return treeRoot;
	}
	else{
		if(treeRoot->getItem()==target){
			treeRoot = removeNode(treeRoot);
			success = true;	
			return treeRoot;
		}
		else{
			if(target < treeRoot->getItem())
				treeRoot->setLeftChildPtr(removeEntry(treeRoot->getLeftChildPtr(), target, success));
			else
				treeRoot->setRightChildPtr(removeEntry(treeRoot->getRightChildPtr(), target, success));
			
			return treeRoot;
		}
	}
}
template<class ItemType>
BinaryNode<ItemType> *BinarySearchTree<ItemType>::removeNode(BinaryNode<ItemType> *nodeToBeRemoved)
{
	BinaryNode<ItemType>* nodePtr = NULL;
	if(nodeToBeRemoved->isLeaf())
		delete (nodeToBeRemoved);
	else{
		if(nodeToBeRemoved->getLeftChildPtr() != NULL && nodeToBeRemoved->getRightChildPtr() == NULL){
			nodePtr = nodeToBeRemoved->getLeftChildPtr();
			nodeToBeRemoved->setLeftChildPtr(NULL);
			delete(nodeToBeRemoved);
		}
		else if(nodeToBeRemoved->getLeftChildPtr() == NULL && nodeToBeRemoved->getRightChildPtr() != NULL){
			nodePtr = nodeToBeRemoved->getRightChildPtr();
			nodeToBeRemoved->setRightChildPtr(NULL);
			delete(nodeToBeRemoved);
		}
		else{
			ItemType item;
			nodeToBeRemoved->setRightChildPtr(removeLeftMost(nodeToBeRemoved->getRightChildPtr(), item));
			nodeToBeRemoved->setItem(item);
			nodePtr = nodeToBeRemoved;
		}
	}
	return nodePtr;
}
template<class ItemType>
BinaryNode<ItemType> *BinarySearchTree<ItemType>::removeLeftMost(BinaryNode<ItemType> *treeRoot,
	ItemType &nodeItem)
{
	if(treeRoot->getLeftChildPtr()==NULL){
		nodeItem = treeRoot->getItem();
		return (removeNode(treeRoot));
	}
	else{
		treeRoot->setLeftChildPtr(removeLeftMost(treeRoot->getLeftChildPtr(), nodeItem));
		return treeRoot;
	}
}
template<class ItemType>
bool BinarySearchTree<ItemType>::binarySearchRemove(ItemType &anItem)
{
	bool success;
	rootPtr = removeEntry(rootPtr, anItem,success);
	return success;
}
template<class ItemType>
bool BinarySearchTree<ItemType>::contains(ItemType &item)
{
	if(getNode(rootPtr, item)==NULL)
		return false;
	else
		return true;
}
	#endif
