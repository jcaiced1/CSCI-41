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
protected:
	BinaryNode<ItemType> *createBinaryTreeHelper(BinaryNode<ItemType> *treeRoot);
	void preOrderVisit(BinaryNode<ItemType> *treeRoot);
	void inOrderVisit(BinaryNode<ItemType> *treeRoot);
	void postOrderVisit(BinaryNode<ItemType> *treeRoot);
public:
	//Constructors
	BinaryTree();
	BinaryTree(const ItemType &rootItem);


	//Set and Get functions 
	ItemType getRootItem();
	void setRootItem(const ItemType &rootItem);

	//Other member functions
	bool isEmpty() const;
	void createBinaryTree();
	void displayPreorder();
	void displayInorder();
	void displayPostorder();
};
//Constructors
template<class ItemType>
BinaryTree<ItemType>::BinaryTree()
{
	rootPtr = NULL;
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
	cout << "Go to left? Enter 1 for yes or 0 for no" << endl;
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
void BinaryTree<ItemType>::preOrderVisit(BinaryNode<ItemType> *treeRoot)
{
	if(treeRoot!=NULL){
		cout<treeRoot->getItem()<<endl;
		preOrderVisit(treeRoot->getLeftChildPtr());
		preOrderVisit(treeRoot->getRightChildPtr());
	}
}
template<class ItemType>
void BinaryTree<ItemType>::inOrderVisit(BinaryNode<ItemType> *treeRoot)
{	
}
template<class ItemType>
void BinaryTree<ItemType>::postOrderVisit(BinaryNode<ItemType> *treeRoot)
{

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
#endif

