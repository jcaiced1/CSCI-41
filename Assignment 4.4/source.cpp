#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

int main() {
	BinarySearchTree<int> myTree;
	int a[5]={4,2,9,10,3};
	for(int i=0;i<5;i++){
		myTree.binarySearchAdd(a[i]);			// BINARY SEARCH ADD
	}
	myTree.displayInorder();					// DISPLAY IN ORDER
	cout<<"==============="<<endl;
	int b=4;
	myTree.binarySearchRemove(b);				// BINARY SEARCH REMOVE
	myTree.displayInorder();
	cout<<"==============="<<endl;	
	int e[3]={2,5,9};
	for(int i=0;i<3;i++)
		{
			if(myTree.contains(e[i]))						// CONTAINS
				cout<< e[i]<< " is in the tree"<<endl;
			else
				cout<< e[i]<< " is NOT in the tree"<<endl;
		}
	cout<<"==============="<<endl;	
	system("pause");
	return 0;
}