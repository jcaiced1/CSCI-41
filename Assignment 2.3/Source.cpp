#include <iostream>
#include"Node.h"
#include <string>
using namespace std;

int main()
{
	
	/*
	QUESTION 1
	
	Asks a user to enter four words such as "winter", "spring", "summer", 
	and "fall", save them in a linked list with one word per node, 
	and then display the data items in the linked list.
	*/
	
	Node<string>* head = NULL;
	string dataItem;
	cout<<"QUESTION 1\n";
	cout<<"PLEASE ENTER 4 WORDS\n";
	cout<<"-----------------------\n";
	for(int i=0; i<4; i++){
		cin>> dataItem;
		head= new Node<string>(dataItem, head);
	}
	cout<<endl;
	cout<<"-----------------------\n";
	cout<<"The words in the linked list are:\n\n";
	Node<string>* curNode = head, *preNode;		//displays
	
	/*
	while (curNode!=NULL) {	
		//--------------------
		cout<<curNode->getItem()<<endl;
		curNode=curNode->getNext();
		//--------------------
		
		
		
		
	}
	*/
	while (curNode->getNext()!=NULL) {	
		//--------------------
		preNode=curNode;
		curNode=curNode->getNext();
		//--------------------
		
		
		
		
	}

	
	cout<<preNode->getItem()<<endl;
	
	/*
	QUESTION 2
	
	Asks a user to enter a string of characters and save it in a string variable. 
	Store each character of the string in a linked list one character per node. 
	Display the data item in the linked list.
	*/
	
	Node<char>* head2 = NULL;
	string newString;
	char newItem;
	cout<<"QUESTION 2\n";
	cout<<"PLEASE ENTER A STRING OF CHARACTERS:\n";
	cout<<"-----------------------\n";
	cin>> newString;
	int length= newString.length();
	for(int i=0;i<length;i++){
		newItem=newString[i];
		head2= new Node<char>(newItem, head2);
	}
	cout<<endl;
	cout<<"-----------------------\n";
	cout<<"The characters in the linked list are:\n\n";
	Node<char>* newNode = head2;
	while(newNode!=NULL)
		{
			cout<<newNode->getItem()<<endl;
			newNode=newNode->getNext();
		}
	cout<<"-----------------------\n\n";
	
	/*
	QUESTION 3
	
	Use random function to randomly produce 12 integers between 0 and 99 and 
	save them in a linked list. Then ask a user to enter an integer, if the number 
	user entered is one the numbers in the list, display a message "You got it!" 
	otherwise, display a message "No, it is not in the list."
	*/
	
	Node<int>* head3 = NULL;
	int a,newInt;
	cout<<"QUESTION 3\n";
	for(int i=0;i<12;i++)
		{
			a = rand()%99;
			head3 = new Node<int>(a, head3);
			//cout<<a<<endl;				//	<- COMMENT IT OUT TO PRINT EACH ONE OF THE NUMBERS 
		}
	cout<<"PLEASE ENTER AN INTEGER (to check if it is inside the hidden linked list): ";
	cin>> newInt;
	Node<int>* curNodeInt = head3;
	cout<<"-----------------------\n\n";
	cout<<"Is the integer inside the linked list?\n\n";
	while (curNodeInt!=NULL) {
		if(curNodeInt->getNext()==NULL && curNodeInt->getItem()!=newInt){
			cout<<"NO, it is not in the list."<<endl;
		}
		if(curNodeInt->getItem()==newInt){
			cout<<"YES, You got it!"<<endl;
			break;
		}
		curNodeInt=curNodeInt->getNext();
	}
	cout<<"-----------------------\n\n";
	
	/*
	QUESTION 4
	
	Use random function to randomly produce 50 integers between 0 and 99 and save them 
	in a linked list. Find and display the total number of odd numbers in the list.
	*/
	
	Node<int>* head4 = NULL;
	int o,u=0;
	cout<<"QUESTION 4\n";
	cout<<"ONLY ODD NUMBERS (FROM A TOTAL OF 50 RANDOM INTEGERS) FROM 0 TO 99:\n";
	cout<<"-----------------------\n";
	for(int i=0;i<50;i++)
		{
			o = rand()%99;
			head4 = new Node<int>(o, head4);
			//cout<<o<<endl;								//	<- COMMENT IT OUT TO PRINT EACH ONE OF THE NUMBERS 
		}
	//cout<<"-------------------\n"<<endl;				// <- SEPARATOR IF PRINTING BOTH LISTS (50 RANDOM AND ONLY ODD)
	Node<int>* curNodeOdd = head4;
	while(curNodeOdd!=NULL)
		{
			if(curNodeOdd->getItem()%2!=0){
				//cout<<curNodeOdd->getItem()<<endl; 		//	<- COMMENT IT OUT TO PRINT EACH ONE OF THE ODD NUMBERS
				u++;
			}
			curNodeOdd=curNodeOdd->getNext();
		}
	cout<<"-----------------------\n";
	cout<<"The total number of odd numbers in the hidden linked list is: "<< u <<endl;
	cout<<"-----------------------\n";
	system("pause");
	return 0;
}