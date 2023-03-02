#include <iostream>
#include "BinaryNode.h"
using namespace std;

void display(BinaryNode<int> *treeRoot)
{
	if(treeRoot!=NULL){
		cout<<treeRoot->getItem()<<endl;
		display(treeRoot->getLeftChildPtr());
		display(treeRoot->getRightChildPtr());
	}
}

int sum(BinaryNode<int> *treeRoot)
{
	int s=0;
	if(treeRoot==NULL){
		cout<<"It is an empty tree"<<endl;
		exit(1);
	}else{
		s+=treeRoot->getItem();
		if(treeRoot->getLeftChildPtr()!=NULL){
			s+=sum(treeRoot->getLeftChildPtr());
		}	
		if(treeRoot->getRightChildPtr()!=NULL){
			s+=sum(treeRoot->getRightChildPtr());
		}
		return s;
	}
}

int main() {
	
	BinaryNode<int>NodeA;
	NodeA.setItem(5);
	cout<<"The data in the node is "<<NodeA.getItem()<<endl;
	BinaryNode<int> NodeB(10);
	cout<<"The data in the node is "<<NodeB.getItem()<<endl;
	BinaryNode<int>NodeC(15, &NodeA, &NodeB);   // & is used to get the address of other nodes
	BinaryNode<int>NodeD(20,&NodeC,NULL);
	
	display(&NodeD);		//Pass by reference
	
	cout<<"The sum is: "<< sum(&NodeD)<<endl;
	
	system("pause");
	return 0;
}