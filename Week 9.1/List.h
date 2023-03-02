#ifndef _LIST
#define _LIST

#include <iostream>
#include "Node.h"
using namespace std;

template<class ItemType>
class List
{
private: 
	Node<ItemType>*head;
	int itemCount; 			//Current count of list items
	//Node<ItemType> *getNodeAt(int position) const;			//Returns the adress of the Node at a position (ie 3rd), const is to make sure it 													doesnt make any change to the other member functions, it is a constant because it 													shouldn't change
public:
	List();				//Default constructor
	bool isEmpty();
	int getLength();
	bool insert(int position, const ItemType &item);		//Passing by reference
	bool remove(int position);
	void displayList();
	bool contains(ItemType anItem);
	Node<ItemType> *getNodeAt(int position) const;	
};
template<class ItemType>
List<ItemType>::List()
{
	head=NULL;
	itemCount=0;
}
template<class ItemType>
bool List<ItemType>::isEmpty()
{
	return (head==NULL);
}
template<class ItemType>
int List<ItemType>::getLength()
{
	return itemCount;
}
template<class ItemType>
void List<ItemType>::displayList()
{
	Node<ItemType> *curNode = head;
	while(curNode!=NULL)
		{
			cout << curNode->getItem() <<endl;
			curNode=curNode->getNext();
		}
}
template<class ItemType>
Node<ItemType>* List<ItemType>::getNodeAt(int position) const
{
	if(position < 1 || position > itemCount){
		cout<<"It is an invalid position"<<endl;
		return NULL;
	}else{
		Node<ItemType> *curNode=head;
		for(int i=0;i<position-1;i++){
			curNode=curNode->getNext();
		}
		return curNode;
	}
}
template<class ItemType>
bool List<ItemType>::insert(int position, const ItemType &item)
{
	Node<ItemType> *preNode=NULL, *curNode=head;
	if(position<=0 or position>itemCount+1){
		cout<<"Invalid position!"<<endl;
		return false;
	}else{
		if(position==1){
			head=new Node<ItemType>(item,head);
		}else{
			preNode=getNodeAt(position -1);
			curNode=getNodeAt(position);
			Node<ItemType> *newNode=new Node<ItemType>(item, curNode);
			preNode->setNext(newNode);
		}
		itemCount++;
		return true;
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
bool List<ItemType>::contains(ItemType anItem)
{
	Node<ItemType> *curNode = head;
	while(curNode!=NULL){
		if(curNode->getItem()==anItem){
			return true;
		}else{
			curNode=curNode->getNext();
		}
	}
}

#endif