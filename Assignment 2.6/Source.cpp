//Assignment 2.6 (LinkedStack)

/*
1. Complete the class template in the header file LinkedStack.h we have started in the lecture. (Study the lecture and follow the instructions)

2. Write a program that uses above class template to create a string stack called room, and then put following words on the stack: "floor", "table", "box", "book", "phone", "cup", "pencil". After those words have been up on the stack, only display the third item from the top of the stack on the output screen.

*/

#include <iostream>
#include <string>
#include "LinkedStack.h"
#include "Node.h"

using namespace std;

int main() {
	// 1
	/*
	int b;
	Node <int> *head =NULL;
	string a={7,2,'x',5,8,'x',15};
	for(int i=0;i<7;i++)
		{
		b = a[i];
		head =new Node<int>(b, head);
	}
	Node<int> *curNode=head;
	curNode=curNode->getNext();
	curNode=curNode->getNext();
	int c;
	c=curNode->getItem();
	cout<<c<<endl;
	
	//2									/// profesor wants perhaps 15
	
	int b;
	Node <int> *head =NULL;
	string x={7,2,9,5,8,3,15};
	for(int i=0;i<x.length();i++)
		{
			b = x[i];
			head =new Node<int>(b, head);
		}
	Node<int> *curNode=head;
	
	int a;
	
	while(curNode->getNext()!=NULL){
		{
			curNode=curNode->getNext();
		}
		a=curNode->getItem();
	}
	cout<<a<<endl;
	
	*/
	
	//3
	
	int b;
	Node <int> *head =NULL;
	string x={15,3,8,6,4,2,5};
	for(int i=0;i<x.length();i++)
		{
			b = x[i];
			head =new Node<int>(b, head);
		}
	
	/*
	Node<int> *curNode=head;
	
	int a=0;
	
	curNode->setNext(NULL);
	
	while(curNode!=NULL){
		
		a+=curNode->getItem();
		
		curNode=curNode->getNext();
		
	}
	*/
	cout<<a<<endl;
	
	system("pause");
	return 0;
}