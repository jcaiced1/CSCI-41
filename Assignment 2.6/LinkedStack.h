#ifndef _LinkedStack
#define _LinkedStack
#include<iostream>
#include"Node.h"
using namespace std;

//class definition
template<class ItemType>
class LinkedStack
{
private:
	Node<ItemType> *top;		//It is the empty list pointing to the top of the stack
public:
	LinkedStack();
	bool isEmpty();
	bool push(ItemType item);
	bool pop();
	ItemType peek();
	void display();
	void clean();
	Node<ItemType> *getNodeAt(int position) const;
	ItemType getA();
};
template<class ItemType>
LinkedStack<ItemType>::LinkedStack()
{
	top=NULL;
}
template<class ItemType>
bool LinkedStack<ItemType>::isEmpty()
{
	return (top==NULL);
}
template<class ItemType>
bool LinkedStack<ItemType>::push(ItemType item)
{
	top=new Node<ItemType>(item,top);
	return true;
}
template<class ItemType>
bool LinkedStack<ItemType>::pop()
{
	if(!isEmpty()){
		Node<ItemType> *curNode=top;
		top=top->getNext();
		curNode->setNext(NULL);
		delete(curNode);
		return true;
	}else{
		cout<<"It is an empty stack!"<<endl;
		return false;
	}
}
template<class ItemType>
ItemType LinkedStack<ItemType>::peek()
{
	if(isEmpty()){
		cout<<"The Stack is empty!"<<endl;
		exit(1);
	}
	else{
		return top->getItem();
	}
}
template<class ItemType>
void LinkedStack<ItemType>::display()
{
	Node<ItemType> *curNode=top;
	if(curNode==NULL){
		cout<<"Is is an empty stack"<<endl;
	}else{
		while(curNode!=NULL){
			cout<<curNode->getItem()<<endl;
			curNode=curNode->getNext();
		}
	}
}
template<class ItemType>
void LinkedStack<ItemType>::clean()
{
	while(!isEmpty()){
		pop();
	}
}
template<class ItemType>
Node<ItemType>* LinkedStack<ItemType>::getNodeAt(int position) const
{
	Node<ItemType> *curNode=top;
	for(int i=0;i<position-1;i++){
		curNode=curNode->getNext();
	}
	return curNode;
}
template<class ItemType>
ItemType LinkedStack<ItemType>::getA()
{
	Node<ItemType> *curNode;
	curNode=curNode->getNext();
	curNode=curNode->getNext();
	int a;
	a=curNode->getItem();
	return a;
	}

	#endif