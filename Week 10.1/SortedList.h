#ifndef _SORTED_LIST
#define _SORTED_LIST
#include <iostream>
#include"Node.h"
using namespace std;

template<class ItemType>
class SortedList
{
private:
	Node<ItemType> *head;
	int itemCount;		//Current count of list items
	Node<ItemType> *getNodeBefore(const ItemType &anEntry)const;
	Node<ItemType> *getNodeAt(int position) const; //Return a pointer that hold the address of the node at 'position'
public:
	SortedList(); //Default constructor
	SortedList(const SortedList<ItemType> &aList); //Copy constructor
	bool isEmpty() const;  //Check if the list empty (no item stored in the array)
	int getLength() const; //Returns the number of items in the list
	bool remove(int position); //Remove an entry at given position from the list
	void clear(); //remove all the items from the list
	ItemType getEntry(int position) const; //Retrieves an item on the list at the given position
	void displayList();
	
	//Following are three new methods:
	void insertSorted(const ItemType &newEntry);
	bool removeSorted(const ItemType &anEntry);
	int getPosition(const ItemType &newEntry) const;
};
//Complete all the constructors and methods here:

template<class ItemType>
SortedList<ItemType>::SortedList()
{
	head = NULL;
	itemCount=0;
}

template<class ItemType>
SortedList<ItemType>::SortedList(const SortedList<ItemType> &aList)
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
bool SortedList<ItemType>::isEmpty() const
{
	return (head==NULL);
}

template<class ItemType>
int SortedList<ItemType>::getLength() const
{
	return itemCount;
}

template<class ItemType>
bool SortedList<ItemType>::remove(int position)
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
void SortedList<ItemType>::clear()
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
ItemType SortedList<ItemType>::getEntry(int position) const
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
void SortedList<ItemType>::displayList()
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
Node<ItemType> *SortedList<ItemType>::getNodeBefore(const ItemType &anEntry)const
{
	Node<ItemType> *preNode=NULL, *curNode=head;
	while(curNode!=NULL && anEntry>curNode->getItem())
		{
			preNode=curNode;
			curNode=curNode->getNext();
		}
	return preNode;
}

template<class ItemType>
void SortedList<ItemType>::insertSorted(const ItemType &newEntry)
{
	Node<ItemType> *preNode=NULL;
	Node<ItemType> *curNode=head;
	Node<ItemType> *newNode;
	preNode = getNodeBefore(newEntry);
	if(preNode==NULL){ // check statement !or not
		
		//create a new node in front of the list
		//Node<ItemType>* preNode = head; // check if what must be created is a prenode or a current node
		newNode->setNext(head);
		head=newNode;
		
	}else{
		
		curNode = preNode->getNext();
		newNode = new Node<ItemType>(newEntry, curNode);
		preNode->setNext(newNode);
	}
}
/*
template<class ItemType>
bool SortedList<ItemType>::removeSorted(const ItemType &anEntry)
{
	
}
*/


#endif