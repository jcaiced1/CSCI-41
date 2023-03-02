#include<iostream>
#include "BinaryTree.h"
using namespace std;

int main() {
	BinaryTree<int> myBinaryTree;
	myBinaryTree.createBinaryTree();
	cout<<"\nINORDER\n";
	myBinaryTree.displayInorder();
	cout<<"\nPREORDER \n";
	myBinaryTree.displayPreorder();
	cout<<"\nPOSTORDER\n";
	myBinaryTree.displayPostorder();
	return 0;
}

