#include <iostream>
#include"Stack.h"
#include<string>

using namespace std;

int main() {
	//Stack<string> myStack;
	//string a[5]={"jin","adam","fer","noel","roger"};
	Stack<int> myStack;
	int a[5]={10,2,7,3,11};
	for(int i=0;i<5;i++)
		myStack.push(a[i]);
	myStack.display();
	myStack.pop();
	cout<<"=================="<<endl;
	myStack.display();
	cout<<"The date on the top is "<<myStack.peek()<<endl;
	system("pause");
	return 0;
}