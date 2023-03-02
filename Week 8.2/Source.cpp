#include <iostream>
#include "List.h"

using namespace std;

int main() {
	List<int> myList;
	myList.insert(2, 15);
	myList.insert(1, 5);
	myList.insert(1, 7);
	myList.insert(1, 4);
	myList.insert(1, 11);
	myList.displayList();
	myList.insert(7,100);
	cout<<"============"<<endl;
	myList.displayList();
	cout<<"The node at third position is "<<myList.getNodeAt(3)->getItem()<<endl;
	system("pause");
	return 0;
}