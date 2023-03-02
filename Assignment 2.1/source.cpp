#include <iostream>
#include "Stack.h"
using namespace std;

bool isInLanguage(string aString)
{
	Stack<char> myStack;
	if(aString.length()%2==0)
		{
			int length=aString.length();
			length/=2;
			for(int i=0;i<length;i++)
				{myStack.push(aString[i]);
				}
			int k=length;
			while(!myStack.isEmpty()){
				if(aString[k] != myStack.peek()){
					return false;
				}
				myStack.pop();
				k++;
			}
			return true;
		}
	if(aString.length()%2!=0)
		{
			int length=aString.length();
			length/=2;
			for(int i=0;i<length;i++)
				{myStack.push(aString[i]);
				}
			int k=length+1;
			while(!myStack.isEmpty()){
				if(aString[k] != myStack.peek()){
					return false;
				}
				myStack.pop();
				k++;
			}
			return true;
		}
	return true;
}

int main(){
	string a="abdc", b="abcacba", c="abccba", d="a", e="aaaa";
	if(isInLanguage(a)){
		cout<<"In the language."<<endl;
	}
	else{
		cout<<"It is not in the language"<<endl;
	}
	if(isInLanguage(b)){
		cout<<"In the language."<<endl;
	}
	else{
		cout<<"It is not in the language"<<endl;
	}
	if(isInLanguage(c)){
		cout<<"In the language."<<endl;
	}
	else{
		cout<<"It is not in the language"<<endl;
	}
	if(isInLanguage(d)){
		cout<<"In the language."<<endl;
	}
	else{
		cout<<"It is not in the language"<<endl;
	}
	if(isInLanguage(e)){
		cout<<"In the language."<<endl;
	}
	else{
		cout<<"It is not in the language"<<endl;
	}
	return 0;
}