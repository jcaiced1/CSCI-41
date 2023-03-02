#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

int main() {
	BinarySearchTree<int> myTree;
	int a[8]={5,11,4,10,12,2,9,3};
	for(int i=0;i<8;i++){
		myTree.binarySearchAdd(a[i]);
	}
	myTree.displayInorder();
	cout<<"==============="<<endl;
	int b=4;
	myTree.binarySearchRemove(b);
	myTree.displayInorder();
	cout<<"==============="<<endl;	
	b=3;
	myTree.binarySearchRemove(b);
	myTree.displayInorder();
	cout<<"==============="<<endl;	
	b=5;
	myTree.binarySearchRemove(b);
	myTree.displayInorder();
	cout<<"==============="<<endl;	
	
	system("pause");
	return 0;
}