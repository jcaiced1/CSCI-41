//Lecture 2.4 , Display the Data Stored in a Linked List

#include<iostream>
#include"Node.h"
using namespace std;

int main()
{
	Node<int>* head = NULL;
	int dataItem;
	for (int i = 0; i<5; i++){
		cout<<"Please enter an integer:\n";
		cin>> dataItem;
		head = new Node<int>(dataItem, head);
	}
	cout << "The data items in the linked list are:\n";
	Node<int>* curNode = head;
	while(curNode!=NULL){   //we dont know how many elements will be inside the list
		//---------------------
		cout<<curNode->getItem()<<endl;
		curNode = curNode->getNext();
		//---------------------	
	}
	return 0;
}