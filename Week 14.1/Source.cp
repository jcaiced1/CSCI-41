#include<iostream>
#include "BinaryTree.h"
using namespace std;

int main() {
	BinaryTree<int> myBinaryTree, yourBinaryTree(15);
	/*myBinaryTree.setRootItem(100);
	yourBinaryTree.setRootItem(20);
	if (!myBinaryTree.isEmpty()) {
		cout << "The data item in the root is " << myBinaryTree.getRootItem() << endl;
	}
	if (!yourBinaryTree.isEmpty()) {
		cout << "The data item in the root is " << yourBinaryTree.getRootItem() << endl;
	}*/
	myBinaryTree.createBinaryTree();
	system("pause");
	return 0;
}
