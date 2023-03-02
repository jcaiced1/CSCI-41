#include <iostream>
#include "Node.h"
using namespace std;

//Write a recursive function that displays the data
//items in a linked list

void displayWhile(Node<int> *list)
{
	while(list!=NULL){
		cout<<list->getItem()<<endl;
		list=list->getNext();
	}
}

void displayRecursive(Node<int> *list)
{
	if(list!=NULL){
		if(list->getNext()==NULL){
			cout<<list->getItem()<<endl;
		}
		else{
			cout<<list->getItem()<<endl;
			displayRecursive(list->getNext());
		}
	}
}

bool containsWhile(Node<int> *list, int key)
{
	while(list!=NULL){
		if(list->getItem()==key){
			return true;
		}
		else{
			list=list->getNext();
		}
	}
	return false;
}

bool containsRecursive(Node<int> *list, int key)
{
	if(list==NULL){
		return false;
	}
	else{
		if(list->getNext()==NULL){
			if(list->getItem()==key)
				return true;
			else
				return false;	
		}
		else{
			if(list->getItem()==key){
				return true;
			}
			else{
				if(containsRecursive(list->getNext(),key)){
					return true;
				}
				else
					return false;
			}
		}
	}
}

int getMax(Node<int> *list) {
	if(list==NULL){
		cout<<"empty list"<<endl;
		exit(1);
	}
	else {
		if(list->getNext()==NULL)
			return list->getItem();
		else{
			int m= getMax(list->getNext());
			if(m>list->getItem())
				return m;
			else
				return list->getItem();
		}
	}
}

int main() {
	Node<int> *head =NULL;
	for(int i=0;i<10;i++)
		{
			head=new Node<int>(rand()%100,head);
		}
	displayWhile(head);
	cout<<"=========="<<endl;
	displayRecursive(head);
	cout<<"=========="<<endl;
	int item;
	cout<<"Enter an integer: ";
	cin>>item;
	if(containsWhile(head, item)){
		cout<<"yes, the item is found"<<endl;
	}
	else{
		cout<<"No, it is not in the list"<<endl;
	};
	cout<<"============"<<endl;
	if(containsRecursive(head, item)){
		cout<<"yes, the item is found"<<endl;
	}
	else{
		cout<<"No, it is not in the list"<<endl;
	}
	cout<<"The highest number is: "<<getMax(head)<<endl;
	system("pause");
	return 0;
}