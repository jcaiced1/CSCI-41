#include <iostream>
#include "Stack.h"
#include<string>
using namespace std;

bool isSymetric(string a){
	//Declare an object of Stack and a string of characters
	Stack<char> myStack;
	
	//Push each character of the string to the myStack
	//Pop them out of the Stack
	
	/*
	int i = 0;
	while(a[i] != '\0'){
	myStack.push(a.at(i));
	i++;
	}
	while(!myStack.isEmpty()){
	cout<<myStack.peek()<<endl;
	myStack.pop();
	}
	*/
	
	
	//push the first half of the characters of the string to the myStack
	//Pop them out of the Stack
	
	
	/*
	int length;
	length=a.length();
	length/=2; 			//length =length/2;
	cout<<length<<endl;
	
	for (int i =0;i<length;i++){
	myStack.push(a[i]);
	}
	while(!myStack.isEmpty()){
	cout<<myStack.peek()<<endl;
	myStack.pop();
	}
	*/
	
	//write a program that tests to see if a string is symetric to a dollar sign (example abc$cba)
	
	
	int length;
	length=a.length();
	if(length%2==0){
		return false;
	}
	length/=2; 			//length =length/2;
	if(a[length]!='$'){
		return false;
	}
	for(int i=0;i<length;i++) //this length is the half of the entire string
	myStack.push(a[i]);
	int k=length+1;		//it needs the +1 to start with the other side of the dollar sign
	while(!myStack.isEmpty()){
		if(a[k] != myStack.peek()){
			return false;
		}
		myStack.pop();
		k++;
	}
	return true;
}

int main()
{
	string str="abcde$edcca";
	string str1="abcde$edcba";
	if(isSymetric(str)){
		cout<<"Yes, It is symetric!"<<endl;
	}else 
		cout<<"No, it is not symetric!"<<endl;
	if(isSymetric(str1)){
		cout<<"Yes, It is symetric!"<<endl;
	}else 
		cout<<"No, it is not symetric!"<<endl;
	
	system("pause");
	return 0;
}