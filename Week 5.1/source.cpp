#include <iostream>
#include "Stack.h"
using namespace std;

bool inLanguage_1(string str)
{
	if(str.length()%2==0 or str[str.length()/2]!='$')
		return false;
	Stack<char> myStack;
	for(int i=0;i<str.length()/2;i++){
		myStack.push(str[i]);
	}
	return true; // or return false;
}

int main(){
	
	string a="abc$cba", b="abc$abcd";
	if(inLanguage_1(a)){
		cout<<"It is symetric."<<endl;
	}
	else{
		cout<<"It is not symetric."<<endl;
	}
	if(inLanguage_1(b)){
		cout<<"It is symetric."<<endl;
	}
	else{
		cout<<"It is not symetric."<<endl;
	}
	
	return 0;
}