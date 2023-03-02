#include <iostream>
#include "Node.h"
using namespace std;

int main() {
	Node<int> *head = NULL; //we consider it as an empty list
	int a, newItem;
	cout<<"How many data do you have? ";
	cin>>a;
	for(int i=0;i<a;i++){
		cout<<"Please enter the data item: ";
		cin>>newItem;
		head = new Node<int>(newItem,head);
	}
	Node<int> *curNode = head;
	cout<< "The data items in the list are: "<<endl;
	cout<<curNode->getItem()<<endl;
	for(int i=0; i<a-1;i++){
		curNode=curNode->getNext();
		cout<<curNode->getItem()<<endl;
	}
	system("pause");
	return 0;
}