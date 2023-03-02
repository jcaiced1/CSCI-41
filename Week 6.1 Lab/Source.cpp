/*
write a program that use a looping statement to create a 
linked list that stores 20 test scores user entered. This 
program will not have any output so far, you will just need 
to make sure the program will be complied successfully with no error message. 
*/

#include <iostream>
#include "Node.h"
using namespace std;

int main() {
	Node<int>* head=NULL;
	int dataItem;
	
	for(int i=0;i<20;i++)
	{
		cout<<"Please enter an integer:"<<endl;
		cin >> dataItem;
		head = new Node<int>(dataItem, head);
	}
	
	return 0;
}