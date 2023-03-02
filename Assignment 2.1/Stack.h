#ifndef _Stack
#define _Stack
#include<iostream>
using namespace std;

//class definition
template<class ItemType>
class Stack
{
private:
	ItemType items[100];
	int top;
public:
	Stack();
	bool isEmpty();
	bool push(ItemType item);
	bool pop();
	ItemType peek();
	void display();
};
template<class ItemType>
Stack<ItemType>::Stack()
{
	top=-1;
}
template<class ItemType>
bool Stack<ItemType>::isEmpty()
{
	return(top==-1);
}
template<class ItemType>
bool Stack<ItemType>::push(ItemType item)
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
bool Stack<ItemType>::pop()
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
ItemType Stack<ItemType>::peek()
{
	if(isEmpty()){
		cout<<"The Stack is empty!"<<endl;
		exit(1);
	}
	else{
		return items[top];
	}
}
template<class ItemType>
void Stack<ItemType>::display()
{
	cout<<"The stack contains following data:"<<endl;
	for (int i=0;i<=top;i++)
		cout<<items[i]<<endl;
}

#endif