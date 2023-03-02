#include <iostream>
#include "Node.h"
#include <string>

using namespace std;
//Write a function that receives an integer linked list
//and returns the sum of the integers stored in the list

int sum(Node<int> *list) //it pases a pointer to the first node
{
	if(list==NULL){
		exit(1);
	}
	else{
		int s=0;
		Node<int> *curNode=list;
		while(curNode!=NULL){
		s+=curNode->getItem();
		curNode=curNode->getNext();
	}
	return s;
}
}

//Write a function that receives an integer list
//and add a new node with a new integer in it to 
// the linked list the function receives.

Node<int> *addNewNode(Node<int> *list, int newItem)
{
	list=new Node<int> (newItem, list);		//the list inside the parentesis is just a copy of *list
	return list;
}


int main() {
	
	Node<int> *head = NULL;
	for (int i=0;i<5;i++){
		head=new Node<int>(rand()%10, head);
	}
	Node<int> *curNode =head;
	cout<<"The integers in the list are: "<<endl;
	while(curNode!=NULL){
		cout<<curNode->getItem()<<endl;
		curNode=curNode->getNext();
	}
	cout<<"=================="<<endl;
	cout<<"The sum of those integers is: "<<sum(head)<<endl;
	cout<<"The integers in the list are: "<<endl;

	head=addNewNode(head, 100);
	cout<<"The sum of those integers is: "<<sum(head)<<endl;
	curNode=head;
	while(curNode!=NULL){
		cout<<curNode->getItem()<<endl;
		curNode=curNode->getNext();
	}
	
	
	
	//Remove the first node of the list
	curNode=head;	//	<- Resets the curNode back to the first node
	head=head->getNext();	//remove the first node
	curNode->setNext(NULL);	//disconnect 
	delete (curNode);	//release memory
	cout<<"=============="<<endl;
	cout<<"The integers in the list are: "<<endl;
	curNode=head;
	while(curNode!=NULL){
		cout<<curNode->getItem()<<endl;
		curNode=curNode->getNext();
	}
	system("pause");
	return 0;
}