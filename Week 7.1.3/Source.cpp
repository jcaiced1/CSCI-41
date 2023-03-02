//Lecutre 2-8

//Write a function (not a main() function) that receives a linked list. The 
//function removes the first node of the list and returns a pointer that points to
//the first node of the modified list.

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
	head=removeFirst(head);
	cout<<"==============="<<endl;
	display(head);
	cout<<"==============="<<endl;
	return 0;
}