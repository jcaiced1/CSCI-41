//Assignment 2-4

/*
Write a C++ program that contains following functions:

1. bool contains (Node<char> *list, char item)

This function receives a character linked list (receives a pointer that is either a 
NULL pointer or a pointer pointing to the first node of a linked list) and a character. 
The function will return true if the character the function receives is one of the 
characters stored in the list, otherwise the function returns false.

2. int getLength (Node<int> *list)

This function receives a linked list and returns the count of nodes in the list.

3. int getMax(Node<int> *list)

This function receives an integer linked list and returns the largest integer in the list.

4. int getLast(Node<int> *list)

This function receives an integer linked list and returns the data item in the last node of the list.

*/

#include <iostream>
#include "Node.h"
#include <string>

using namespace std;

void display(Node<int>* list)
{
	Node<int>* curNode=list;
	while(curNode!=NULL){
		cout<<curNode->getItem()<<endl;
		curNode=curNode->getNext();
	}
}

bool contains(Node<char> *list,char item)
{
	if(list==NULL){
		cout<<"no items in the list"<<endl;
		// exit(1);
	}
	Node<char> *curNode=list;
	while (curNode!=NULL) {
		if(curNode->getItem()==item)
			return true;
		curNode=curNode->getNext();
	}
	return false;
}

int getLength (Node<int>* list)
{
	if(list==NULL){
		cout<<"no items in the list"<<endl;
		// exit(1);
	}
	int l=0;
	Node<int>* curNode= list;
	while(curNode!=NULL){
		curNode=curNode->getNext();
		l++;
	}
	return l;
}

int getMax(Node<int> *list)
{
	if(list==NULL){
		cout<<"no items in the list"<<endl;
		exit(1);  
	}
	Node<int>* curNode= list;
	int m= curNode->getItem();
	while(curNode!=NULL){
		if(curNode->getItem() > m){
			m = curNode->getItem();
		}
		curNode= curNode->getNext();
	}
	return m;
}

int getLast(Node<int> *list){
	if(list==NULL){
		cout<<"no items in the list"<<endl;
		// exit(1);
	}
	Node<int>* curNode= list;
	int y = curNode->getItem();
	while(curNode!=NULL){
		y = curNode->getItem();
		curNode=curNode->getNext();
	}
	return y;
}

int main() {
	/*
	//Question 1
	cout<<"QUESTION 1"<<endl;	
	Node<char> *head=NULL;
	char newChar;
	char a[6]={'c','d','a','f','e','t'};
	cout<<"Is the character \"r\" is in the list? (c,d,a,f,e,t)"<<endl;
	for(int i=0;i<6;i++){
		newChar=a[i];
		head= new Node<char>(newChar, head);
	}
	if(contains(head,'r')){
		cout<<"Yes, it is in the list."<<endl;
	}
	else{
		cout<<"No, it is not in the list"<<endl;
	}
	cout<<"================="<<endl;
	cout<<endl;
	//-----------------------------------------------------------
	//Question 2
	cout<<"QUESTION 2"<<endl;
	Node<int> *head1 = NULL; 
	int newCount;
	int b[6]={1,2,3,4,5,6};
	for(int i=0;i<6;i++){
		newCount=b[i];
		head1= new Node<int>(newCount, head1);
	}
	int c= getLength(head1);
	cout<<"How many nodes are there in the list? (1,2,3,4,5,6)"<<endl;
	cout<<c<<endl;
	cout<<"================="<<endl;
	cout<<endl;
	//-----------------------------------------------------------
	//Question 3
	cout<<"QUESTION 3"<<endl;
	Node<int> *head2 = NULL; 
	int newMax;
	int d[6]={1,2,9,7,4,2};
	for(int i=0;i<6;i++){
		newMax=d[i];
		head2= new Node<int>(newMax, head2);
	}
	int e= getMax(head2);
	cout<<"What is the Maximum value in the list? (1,2,9,7,4,2)"<<endl;
	cout<<e<<endl;
	cout<<"================="<<endl;
	cout<<endl;
	//-----------------------------------------------------------
	//Question 4
	cout<<"QUESTION 4"<<endl;
	Node<int> *head3 = NULL; 
	int newLast;
	int f[6]={4,3,9,7,0,2};
	for(int i=0;i<6;i++){
		newLast=f[i];
		head3= new Node<int>(newLast, head3);
	}
	int g= getLast(head3);
	cout<<"What is the last value in the list? (1,3,9,7,4,2)"<<endl;
	cout<<g<<endl;
	*/
	
	Node<int> *curNode = head, *preNode;
	while(curNode!=NULL){
		if(curNode->getItem()<9){
			preNode=curNode;
			curNode=curNode->getNext();
		}
		
		else{
			
			break;
			
		}
		
	}
	
	cout<<preNode->getItem()<<endl;
	system("pause");
	return 0;
}
	
