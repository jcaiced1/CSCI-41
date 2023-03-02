#ifndef _LINLEDSTACK
#define _LINLEDSTACK
#include<iostream>
#include "Node.h"
using namespace std;

//class definition
template<class ItemType>
class LinkedStack
{
private:
	Node<ItemType>* top;
	Node<ItemType>* getCurrentTop(){
		return top;
	}
public:
	LinkedStack();
	bool isEmpty();
	bool push(ItemType item);
	bool pop();
	void clean();
	ItemType peek();
	void display();
};
template<class ItemType>
LinkedStack<ItemType>::LinkedStack()
{
	top=NULL;
}
template<class ItemType>
bool LinkedStack<ItemType>::isEmpty()
{
	return(top==NULL);
}
template<class ItemType>
bool LinkedStack<ItemType>::push(ItemType item)
{
	if (top==99){
		cout<<"The stack is full!"<<endl;
		return false;
	}
	else{
		items[++top]=item;
		return true;
	}
}
template<class ItemType>
bool LinkedStack<ItemType>::pop()
{
	if(isEmpty()){
		cout<<"The stack is empty!"<<endl;
		return false;
	}
	else {
		top--;
		return true;
	}
}
template<class ItemType>
ItemType LinkedStack<ItemType>::peek()
{
	if(isEmpty()){
		cout<<"The Stack is empty!"<<endl;
		exit(1);
	}
		return top->getItem();
	}
template<class ItemType>
void Stack<ItemType>::display()
{
	cout<<"The stack contains following data:"<<endl;
	for (int i=0;i<=top;i++)
		cout<<items[i]<<endl;
}

#endif