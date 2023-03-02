//Lecutre 2-7

//Write a function (not a main() function) that receives a linked list and an integer. 
//The function will reset the value of the data item in the last node of the list to the
//value specified by the integer the function received. if the linked list the function 
//receives is an empty list, display a message to inform the user nothing is being reset



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
	setLastItem(head,100);
	cout<<"==============="<<endl;
	display(head);
	cout<<"==============="<<endl;
	return 0;
}