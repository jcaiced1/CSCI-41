//class template BinaryTree header file: BinaryTree.h
#ifndef _BINARY_TREE
#define _BINARY_TREE

#include"BinaryNode.h"
#include<iostream>
using namespace std;


template<class ItemType>
class BinaryTree
{
private:
	BinaryNode<ItemType> *rootPtr;
	int count;
protected:
	BinaryNode<ItemType> *createBinaryTreeHelper(BinaryNode<ItemType> *treeRoot);
	BinaryNode<ItemType> *addNewItemHelper(BinaryNode<ItemType> *treeRoot, ItemType &newItem);  //new
	void preOrderVisit(BinaryNode<ItemType> *treeRoot);
	void inOrderVisit(BinaryNode<ItemType> *treeRoot);
	void postOrderVisit(BinaryNode<ItemType> *treeRoot);
	ItemType getSumHelper(BinaryNode<ItemType> *treeRoot);
	ItemType getMaxHelper(BinaryNode<ItemType> *treeRoot);				// new
	ItemType getNumberOfNodesHelper(BinaryNode<ItemType> *treeRoot);	//new
public:
	//Constructors
	BinaryTree();
	BinaryTree(const ItemType &rootItem);
	void addNewItem(ItemType &newItem);				// new
	
	//Set and Get functions 
	ItemType getRootItem();
	void setRootItem(const ItemType &rootItem);
	
	//Other member functions
	bool isEmpty() const;
	void createBinaryTree();
	void displayPreorder();
	void displayInorder();
	void displayPostorder();
	ItemType getSum();									// new
	ItemType getMax();									// new
	ItemType getNumberOfNodes();						//new
};
//Constructors
template<class ItemType>
BinaryTree<ItemType>::BinaryTree()				
{
	rootPtr = NULL;
	count = 0;
}
template<class ItemType>
BinaryTree<ItemType>::BinaryTree(const ItemType &rootItem)
{
	rootPtr = new BinaryNode<ItemType>(rootItem, NULL, NULL);
}

//Set and Get functions
template<class ItemType>
ItemType BinaryTree<ItemType>::getRootItem()
{
	if (rootPtr != NULL)
		return rootPtr->getItem();
	else {
		cout << "Empty tree!\n";
		exit(1);
	}
}
template<class ItemType>
void BinaryTree<ItemType>::setRootItem(const ItemType &rootItem)
{
	if (rootPtr != NULL)
		rootPtr->setItem(rootItem);
	else
		rootPtr = new BinaryNode<ItemType>(rootItem, NULL, NULL);
}
template<class ItemType>
bool BinaryTree<ItemType>::isEmpty() const
{
	return(rootPtr == NULL);
}
//Assignment 15: Please complete following member functions
template<class ItemType>
BinaryNode<ItemType> *BinaryTree<ItemType>::createBinaryTreeHelper(BinaryNode<ItemType> *treeRoot)
{
	ItemType newItem;
	int option;
	cout << "Please enter the data: ";
	cin >> newItem;
	treeRoot = new BinaryNode<ItemType>(newItem);
	cout << "Go to left? Enter 1 for yes or 0 for not" << endl;
	cin >> option;
	if (option == 1) {
		treeRoot->setLeftChildPtr(createBinaryTreeHelper(treeRoot->getLeftChildPtr()));
	}
	cout << "Go to right? Enter 1 for yes or 0 for not" << endl;
	cin >> option;
	if (option == 1) {
		treeRoot->setRightChildPtr(createBinaryTreeHelper(treeRoot->getRightChildPtr()));
	}
	return treeRoot;
}
template<class ItemType>
BinaryNode<ItemType> *BinaryTree<ItemType>::addNewItemHelper(BinaryNode<ItemType> *treeRoot, ItemType &newItem)    			//new
{
	char a;
	if(treeRoot==NULL)
		treeRoot=new BinaryNode<ItemType>(newItem);
	else{
		cout<<"What side would you like to go? (left = l, right = r)"<<endl;
		cin>>a;
		if(a=='l')
			treeRoot->setLeftChildPtr(addNewItemHelper(treeRoot->getLeftChildPtr(), newItem));
		if(a=='r')
			treeRoot->setRightChildPtr(addNewItemHelper(treeRoot->getRightChildPtr(), newItem));
	}
	return treeRoot;
}


template<class ItemType>
void BinaryTree<ItemType>::preOrderVisit(BinaryNode<ItemType> *treeRoot)
{
	if(treeRoot!=NULL){
		cout<<treeRoot->getItem()<<" ";
		preOrderVisit(treeRoot->getLeftChildPtr());
		preOrderVisit(treeRoot->getRightChildPtr());
	}
}
template<class ItemType>
void BinaryTree<ItemType>::inOrderVisit(BinaryNode<ItemType> *treeRoot)
{	if(treeRoot!=NULL){
		inOrderVisit(treeRoot->getLeftChildPtr());
		cout<<treeRoot->getItem()<<" ";
		inOrderVisit(treeRoot->getRightChildPtr());
	}
}
template<class ItemType>
void BinaryTree<ItemType>::postOrderVisit(BinaryNode<ItemType> *treeRoot)
{
	if(treeRoot!=NULL){
		postOrderVisit(treeRoot->getLeftChildPtr());
		postOrderVisit(treeRoot->getRightChildPtr());
		cout<<treeRoot->getItem()<<" ";
	}
}
template<class ItemType>
ItemType BinaryTree<ItemType>::getSumHelper(BinaryNode<ItemType> *treeRoot)
{
	ItemType s;
	if(isEmpty()){
		cout<< "Empty Tree!"<< endl;
		exit(1);
	}
	else {
		s = treeRoot ->getItem();
		if(treeRoot->getLeftChildPtr()!=NULL)
			s += getSumHelper(treeRoot->getLeftChildPtr());  
		if(treeRoot->getRightChildPtr()!=NULL)
			s += getSumHelper(treeRoot->getRightChildPtr());
	}
	return s;
}

template<class ItemType>
ItemType BinaryTree<ItemType>::getMaxHelper(BinaryNode<ItemType> *treeRoot)					//new
{
	
	if(treeRoot == NULL)
		{
			cout<<"It is an empty tree! Program aborted."<<endl;
			exit(1);
		}
	int m1 = treeRoot->getItem();
	if(treeRoot->getLeftChildPtr()!=NULL){
		int m2= getMaxHelper(treeRoot->getLeftChildPtr());
		if(m1<m2)
			m1 = m2;
	}
	if(treeRoot->getRightChildPtr()!=NULL){
		int m3= getMaxHelper(treeRoot->getRightChildPtr());
		if(m1<m3)
			m1=m3;
	}
	return m1;
}

template<class ItemType>

ItemType BinaryTree<ItemType>::getNumberOfNodesHelper(BinaryNode<ItemType> *treeRoot)			//new
{
	if(treeRoot!=NULL)
		{
			getNumberOfNodesHelper(treeRoot->getLeftChildPtr());
			count++;
			getNumberOfNodesHelper(treeRoot->getRightChildPtr());
		}
	return count;
}

template<class ItemType>
ItemType BinaryTree<ItemType>::getNumberOfNodes()								//new
{
	return getNumberOfNodesHelper(rootPtr);
}


template<class ItemType>
void BinaryTree<ItemType>::createBinaryTree()
{
	rootPtr = createBinaryTreeHelper(rootPtr);
}
template<class ItemType>
void BinaryTree<ItemType>::displayPreorder()
{	preOrderVisit(rootPtr);
}
template<class ItemType>
void BinaryTree<ItemType>::displayInorder()
{
	inOrderVisit(rootPtr);
}
template<class ItemType>
void BinaryTree<ItemType>::displayPostorder()
{
	postOrderVisit(rootPtr);
}

template<class ItemType>
ItemType BinaryTree<ItemType>::getSum()
{
	return getSumHelper(rootPtr);
}
template<class ItemType>
ItemType BinaryTree<ItemType>::getMax()								//new
{
	return getMaxHelper(rootPtr);
}

template<class ItemType>												//new
void BinaryTree<ItemType>::addNewItem(ItemType &newItem)
{
	rootPtr=addNewItemHelper(rootPtr, newItem);
}

#endif