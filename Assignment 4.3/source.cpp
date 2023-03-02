#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() {
	BinaryTree<int> myTree;
	myTree.createBinaryTree();
	cout<<"====="<<endl;
	int x;
	cout<<"Add a new item: ";
	cin>> x;
	myTree.addNewItem(x);
	cout<<"\nINORDER\n";
	myTree.displayInorder();
	cout<<"\nPREORDER \n";
	myTree.displayPreorder();
	cout<<"\nPOSTORDER\n";
	myTree.displayPostorder();
	cout<<endl;
	cout<<"The sum is: "<<myTree.getSum()<<endl;
	cout<<"the max is: "<<myTree.getMax()<<endl;
	cout<<"The number of nodes is: "<<myTree.getNumberOfNodes();

	return 0;
}