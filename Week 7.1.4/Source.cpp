//Lecutre 2-9

//Write a function (not a mian() function) that receives a linked list. The
//function removes the last node of the list and returns a pointer that points to
//the first node of the modified list

#include <iostream>
#include "Node.h"

using namespace std;

//Write a function (not a main() function) that receives a linked
//list as its input and display all the data items in the list

void display(Node<int>* list)
{
	Node<int>* curNode=list;
	while(curNode!=NULL){
		cout<<curNode->getItem()<<endl;
		curNode=curNode->getNext();
	}
}

void setLastItem(Node<int>* list, int a)
{
	Node<int>* curNode = list;
	while (curNode->getNext()!= NULL){
		curNode = curNode->getNext();
	}
curNode->setItem(a);
}

Node<int>* removeFirst(Node<int>* list)
{
	if(list==NULL){
		return NULL;
	}
	else{
		Node<int>* curNode = list;
		list = list->getNext();
		curNode->setNext(NULL);
		delete(curNode);
		return list;
	}
}

Node<int>* removeLast(Node<int>* list)
{
	Node<int>* curNode = list;
	Node<int>* preNode;
	while (curNode->getNext() != NULL){
		preNode = curNode;
		curNode = curNode->getNext();
	}
	preNode->setNext(NULL);
	delete(curNode);
	return (list);
}


int main() {
	Node<int> *head = NULL; //This is an empty list
	Node<int>* newNode;
	int newItem;
	int c;
	cout<<"How many nodes do you want to create?"<<endl;
	cin>>c;
	for(int i=0; i < c; i++){
		cout<<"Please enter an integer:"<<endl;
		cin >> newItem;
		newNode = new Node<int>(newItem, head);
		head = newNode;
	}
	cout<<"==============="<<endl;	
	display(head);
	head=removeLast(head);
	cout<<"==============="<<endl;
	display(head);
	cout<<"==============="<<endl;
	return 0;
}