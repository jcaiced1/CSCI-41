#include <iostream>
#include"Node.h"
using namespace std;

int main()
{
	Node<int>* head = NULL;
	int dataItem;
	for(int i=0; i<5; i++){
		cout<<"Please enter an integer:\n";
		cin>> dataItem;
		head= new Node<int>(dataItem, head);
	}
	cout<<"The data items in the linked list are:\n";
	
	Node<int>* curNode = head;		//displays
	
	while (curNode!=NULL) {	
		//--------------------
		cout<<curNode->getItem()<<endl;
		curNode=curNode->getNext();
		//--------------------
	}
	
	curNode=head;				//resets the current Node to procede to calculate the addition 
	int s=0;
	while (curNode!=NULL) {
		//--------------------
		s+=curNode->getItem();
		curNode=curNode->getNext();
		//--------------------
	}
	cout<<"The sum is: "<<s<<endl;
	
	curNode=head;				//resets the current Node to show the largest number
	int m=curNode->getItem();
	curNode=curNode->getNext();
	while (curNode!=NULL) {
		//--------------------
		if(curNode->getItem()>m)
			m=curNode->getItem();
		curNode=curNode->getNext();
		//--------------------
	}
	cout<<"The largest number is "<< m<<endl;
	
	return 0;
}