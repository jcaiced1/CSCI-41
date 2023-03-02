#include <iostream>
#include "List.h"

using namespace std;

int main() {
	List<int> myList;
	myList.insert(1,5);
	myList.insert(1,7);
	myList.insert(1,2);
	myList.insert(1,3);
	cout<<"================="<<endl;
	myList.displayList();
	cout<<"================="<<endl;
	cout<<myList.contains(3)<<endl;
	
/*	
	int a;
	cout<<"Please enter the position: ";
	cin>>a;
	myList.remove(a);
	cout<<"================="<<endl;
	myList.displayList();
	
	*/
	system("pause");
	return 0;
}