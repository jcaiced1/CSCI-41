#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

int main() {
	BinarySearchTree<int> myTree;
	int a[10]={5,2,11,7,5,4,9,6,1,3};
	for(int i=0;i<10;i++){
		myTree.binarySearchAdd(a[i]);
	}
	myTree.displayInorder();
	system("pause");
	return 0;
}