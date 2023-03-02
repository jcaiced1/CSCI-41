#include <iostream>
#include "LinkedStack.h"
using namespace std;

int main() {
	int a;
	LinkedStack<int> myStack;
	for(int i=0;i<10;i++){
		myStack.push(rand()%100);
	}
	cout<<"The data in the stack are: "<<endl;
	myStack.display();
	cout<<"======================"<<endl;
	cout<<"The data in the top of the stack is "<<myStack.peek()<<endl;
	myStack.pop();
	cout<<"======================"<<endl;
	cout<<"The data in the stack are: "<<endl;
	myStack.display();
	myStack.clean();
	cout<<"======================"<<endl;
	cout<<"The data in the stack are: "<<endl;
	myStack.display();
	system("pause");
	return 0;
}