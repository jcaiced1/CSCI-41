#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() {
	BinaryTree<int> myTree;
	myTree.createBinaryTree();
	cout<<"====="<<endl;
	myTree.displayPreorder();
	cout<<"The sum is: "<<myTree.getSum()<<endl;
	system("pause");
	return 0;
}