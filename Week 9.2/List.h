#ifndef _LIST
#define _LIST
#include"Node.h"
#include <iostream>
using namespace std;
template<class ItemType>
class List
{
private:
	Node<ItemType> *head;
	int itemCount;//Current count of list items
	Node<ItemType> *getNodeAt(int position) const;
public:
	List(); //Default constructor
	List(const List<ItemType> &aList); //Copy constructor
	bool isEmpty() const;  
	int getLength() const; 
	bool insert(int position, const ItemType &newEntry);
	void displayList();
	bool remove(int position); 
	void clear(); //remove all the items from the list
	ItemType getEntry(int position) const; 
	void setEntry(int position, const ItemType &newEntry); 
};

template<class ItemType>
Node<ItemType>* List<ItemType>::getNodeAt(int position) const
{
	Node<ItemType>* curNode = head;
	if(position<1 or position>itemCount)
		{
			return NULL;
		}
	for(int i=0; i<position -1; i++)
		curNode = curNode->getNext();
	return curNode;
}

template<class ItemType>
List<ItemType>::List()
{
	head = NULL;
	itemCount=0;
}

template<class ItemType>
List<ItemType>::List(const List<ItemType>& aList)
{
	if(aList.isEmpty()){
		head=NULL;
		itemCount=0;
	}
	else{
		Node<ItemType> *origNode=aList.head, *newNode;
		head=new Node<ItemType>(origNode->getItem(),NULL);
		itemCount++;
		Node<ItemType> *curNode=head;
		while(origNode->getNext()!=NULL){
			origNode=origNode->getNext();
			newNode=new Node<ItemType>(origNode->getItem(),NULL);
			curNode->setNext(newNode);
			curNode=curNode->getNext();
			itemCount++;
		}
	}
}

template<class ItemType>
bool List<ItemType>::isEmpty() const
{
	return (head==NULL);
}

template<class ItemType>
int List<ItemType>::getLength() const
{
	return itemCount;
}

template<class ItemType>
bool List<ItemType>::insert(int position, const ItemType& newEntry)
{
	Node<ItemType> *preNode=NULL, *curNode=head;
	if(position<=0 or position>itemCount+1){
		cout<<"Warning: Invalid position!\n";
		cout<<"Warning: Insertion failed!\n";
		return false;
	}else{
		if(position==1){
			head=new Node<ItemType>(newEntry,head);
		}else{
			preNode=getNodeAt(position -1);
			curNode=getNodeAt(position);
			Node<ItemType> *newNode=new Node<ItemType>(newEntry, curNode);
			preNode->setNext(newNode);
		}
		itemCount++;
		return true;
	}
}

template<class ItemType>
void List<ItemType>::displayList()
{
	Node<ItemType> *currentNode = head;
	if (head == NULL)
		cout << "It is an empty list!\n";
	while (currentNode != NULL) {
		cout << currentNode->getItem() << endl;
		currentNode = currentNode->getNext();
	}
}

template<class ItemType>
bool List<ItemType>::remove(int position)
{
	if(position>=1 && position<=itemCount){
		if(isEmpty()){
			cout<<"The list is empty, removal failed."<<endl;
			return false;
		}else{
			Node<ItemType> *curNode, *preNode;
			if(position==1){
				curNode=head;
				head=head->getNext();
				curNode->setNext(NULL);			//to disconet the node from the linked list
				delete(curNode);				//the memory is released back to the computer
			}else{
				preNode=getNodeAt(position-1);
				curNode=preNode->getNext();
				preNode->setNext(curNode->getNext());
				curNode->setNext(NULL);
				delete(curNode);
			}
			itemCount--;
			return true;
		}
	}else{
		cout<<"Invalid position"<<endl;
		return false;
	}
}

template<class ItemType>
void List<ItemType>::clear()
{
	while(!isEmpty()){
		if(!isEmpty()){
			Node<ItemType> *curNode=head;
			head=head->getNext();
			curNode->setNext(NULL);
			delete(curNode);
		}else{
			cout<<"It is an empty stack!"<<endl;
		}
	}
}

template<class ItemType>
ItemType List<ItemType>::getEntry(int position) const
{
	if (position<1 or position>itemCount)
		{
			cout<<"The function getEntry() receives an invalid position."<<endl;
			exit(1);
		}else{
			Node<ItemType>* aNode=getNodeAt(position);
			return aNode->getItem();
		}
}

template<class ItemType>
void List<ItemType>::setEntry(int position, const ItemType &newEntry)
{
	if (position<1 or position>itemCount)
		{
			cout<<"The function getEntry() receives an invalid position."<<endl;
			exit(1);
		}else{
			Node<ItemType> *curNode = getNodeAt(position);
			curNode->setItem(newEntry);
			
		}
}

#endif