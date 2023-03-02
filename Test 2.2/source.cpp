/*
Assignment 2.2

Write a function that receives a string of characters and then return true 
if the string is balanced for braces { and } and parentheses ( and ) .

A string is considered as balanced it each open brace or parentheses is paired 
with a closed brace or parentheses accordingly. But,  please note, following string 
is not considered as balanced: "abc{abc(abc}abc)aa) even each open one is paired with an closed one.
*/

#include <iostream>
#include "Stack.h"
using namespace std;

bool balanced_Checking(string str)
{
	Stack<char> charStack;
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='{' or str[i]=='('){
			//We push it to the stack, after pushing increase value of i by 1
			charStack.push(str[i]);
			i++;
		}
		else{
			if(str[i]=='}'){
				//check if stack is empty
				//check if we have a match
				if(charStack.isEmpty() or charStack.peek()!='{'){
					return false;
				}
				else{
					// ? if the stack is not empty or we do have a match. WE NEED TO POP, move to next character, using i ++
					charStack.pop();
					i++;
				}
			}
			else{
				if(str[i]==')'){
					//check if stack is empty
					//check if we have a match
					if(charStack.isEmpty() or charStack.peek()!='('){
						return false;
					}
					else{
						// ? if the stack is not empty or we do have a match. WE NEED TO POP, move to next character, using i ++
						charStack.pop();
						i++;
					}
				}
				else{
					i++;
				}
			}
		}
	}
	if(charStack.isEmpty()){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	Stack<int>  myStack;
	myStack.push('x');
	myStack.push(15);
	myStack.push('x');
	myStack.push(25);
	myStack.push(52);
	myStack.pop();
	myStack.pop();
	myStack.pop();
	cout<<myStack.peek()<<endl;
	return 0;
}