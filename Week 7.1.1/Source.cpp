//Lecture 2-6

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

//Write a function (not a main() function) that receives a linked a list
//as its input and return the sum of the data items in the list

int getSum(Node<int>* list)
{
	Node<int>* curNode=list;
	if(curNode==NULL){
		cout<<"It is an empty list!"<<endl;
		exit(0);
	}
	int s=0;
	while(curNode!=NULL){
		s+=curNode->getItem();
		curNode=curNode->getNext();
	}
	return s;
}

//Write a function (not a main() function) that receives a linked list
//and an integer as its inputs. The function returs true if the integer the 
//function receives is in the list, otherwise the function returns false

bool contains(Node<int> *list,int item)
{
	Node<int> *curNode=list;
	while (curNode!=NULL) {
		if(curNode->getItem()==item)
			return true;
		curNode=curNode->getNext();
	}
	return false;
}

int main() {
	Node<int> *head = NULL; //This is an empty list
	Node<int>* newNode;
	int newItem;
	int c;
	cout<<"How many nodes do you want to create?"<<endl;
	cin>>c;
	for(int i=0;i<c;i++){
		cout<<"Please enter an integer:"<<endl;
		cin>>newItem;
		newNode=new Node<int>(newItem,head);
		head=newNode;
	}
	//Display Data Item in the linked list	
	display(head);
	//Display the sum of the data items in the linked list
	int s;
	s=getSum(head);
	cout<<"The sum is "<<s<<endl;
	//Now try an empty list for this function:
	Node<int>* myList =NULL;
	// s=getSum(myList);				// It is commented out because it causes to exit the program
	cout<<"The sum is "<< s<<endl;
	
	if(contains(head,100)){
		cout<<"Yes, it is in the list."<<endl;
	}
	else{
		cout<<"No, it is not in the list"<<endl;
	}
	
	system("pause");
	return 0;
}