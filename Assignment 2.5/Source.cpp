//Assignment 2.5 (LinkedStack)

/*
1. Complete the class template in the header file LinkedStack.h we have started in the lecture. (Study the lecture and follow the instructions)

2. Write a program that uses above class template to create a string stack called room, and then put following words on the stack: "floor", "table", "box", "book", "phone", "cup", "pencil". After those words have been up on the stack, only display the third item from the top of the stack on the output screen.

*/

#include <iostream>
#include "LinkedStack.h"
using namespace std;

int main() {
	LinkedStack<string> room;
	string a[7]={"floor", "table", "box", "book", "phone", "cup", "pencil"};
	for(int i=0;i<7;i++){
		room.push(a[i]);
	}
	
	
	
	
	
	cout<<"The third item from the top of the stack is: "<<room.getNodeAt(3)->getItem()<<endl;
	system("pause");
	return 0;
}