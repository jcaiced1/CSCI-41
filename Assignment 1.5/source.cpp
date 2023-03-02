/*
1.	Use the class template Stack to create an integer object and a character object. 
2.	Use random function to randomly generated 50 integers and push those odd integers 
generated to the integer stack
3.	Ask user to enter a string of characters, save it in a string variable, and then 
push the first half of characters in the string to the character stack one at time 
by a looping statement (If the number of the characters in the the string is an odd number, 
also push the character that is in the middle of the string to the stack)
4.	Display the content of the integer stack
5.	Display the content of the character stack
*/

#include <iostream>
#include "Stack.h"
#include <string>

using namespace std;

int main(){
	Stack<int> myStack;
	Stack<char> charStack;
	
	while(myStack.GetItemCount()<50){
		int c = rand();
		if(c%2!=0) {
			myStack.push(c);
		}
	}
	
	string d;
	cout<<"Please enter a string of characters"<<endl;
	cin>>d;
	
	int length;
	length=d.length();
	
	if(length%2!=0){
		(length/=2)+=1;
	}else{
		length/=2;
	}
	
	for(int i=0;i<length;i++){
		charStack.push(d[i]);
	}
	
	myStack.display();
	charStack.display();
	system("pause");
	return 0;
}