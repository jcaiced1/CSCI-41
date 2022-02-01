#ifndef _Bag
#define _Bag
#include<iostream>
#include "Circle.h"
using namespace std;

//class definition
template<class ItemType>
class Bag
{
private:
	ItemType items[100];
	int itemCount;
public:
	Bag();
	int getItemCount();
	bool isEmpty();
	bool add(ItemType item);
	bool remove(int item);
	void display();
	void clear();
	bool contains(ItemType item);
	bool removeMax();
	ItemType getSum(); 
	ItemType getMax();
	ItemType getMin();
	void sortA();
};

//implementation
template<class ItemType>
Bag<ItemType>::Bag()
{
	itemCount = 0;
}

template<class ItemType>
int Bag<ItemType>::getItemCount()
{
	return itemCount;
}

template<class ItemType>
bool Bag<ItemType>::add(ItemType item)
{
	if(itemCount==100) {
		cout<<"The bag is full!"<<endl;
		return false;
	}
	else {
		items[itemCount]=item;
		itemCount++;
		return true;
	}
}

template<class ItemType>
void Bag<ItemType>::display()
{
	if (isEmpty()){
		cout<<"The bag is empty!"<<endl;
	}
	else {
		for(int i=0; i<itemCount; i++) { //itemCount her is important or else it would display number that are not even there
			cout<<items[i]<<endl;
		}
	}
}

template<class ItemType>
void Bag<ItemType>::clear()
{
	itemCount =0;
}

template<class ItemType>
bool Bag<ItemType>::isEmpty()
{
	return(itemCount==0);//verify if the Bag is empty, true or false
}

template<class ItemType>
bool Bag<ItemType>::contains(ItemType item)
{
	for (int i=0; i<itemCount; i++){
		if(items[i]==item)
			return true;
	}
	return false;
}

template<class ItemType>
ItemType Bag<ItemType>::getMax()
{
	if(isEmpty()){
		cout<<"The bag is empty!"<<endl;
		exit(1);
	}
	ItemType t =items[0];
	for(int i=0;i<itemCount;i++){
		if(items[i]>t){
			t=items[i];
		}
	}
	return t;
}

template<class ItemType>
ItemType Bag<ItemType>::getMin()
{
	if(isEmpty()){
		cout<<"The bag is empty!"<<endl;
		exit(1);
	}
	int t =items[0];
	for(int i=0;i<itemCount;i++){
		if(items[i]<t){
			t=items[i];
		}
	}
	return t;
}

template<class ItemType>
ItemType Bag<ItemType>::getSum()
{
	if(isEmpty()){
		cout<<"The bag is empty!"<<endl;
		exit(1);
	}
	ItemType s;
	double sum=0;
	for(int i=0;i<itemCount;i++){
		sum+=items[i].getRadius();
	}
	s.setRadius(sum);
	return s;
}

template<class ItemType>
bool Bag<ItemType>::remove(int item)
{
	if (isEmpty()) {
		cout<<"The bag is empty!"<<endl;
		exit(1);
	}
	else if (!contains(item)){
		cout<< "Removal is failed! The item is not in the bag."<<endl;
	}
	else{
		int index = 0;
		for (int i = 0; i < itemCount; i++) {
			if (items[i] == item) {
				index = i;
				break;
			}
		}
		for(int i=index; i<itemCount-1;i++){
			items[i]=items[i+1];
		}
		itemCount--;
	}
}

template<class ItemType>
bool Bag<ItemType>::removeMax()
{
	if(isEmpty()){
		cout<<"Removal is failed! The bag is empty!"<<endl;
		exit(1);
	}
	else{
		ItemType a = items[0];
		for (int i=1;i<itemCount;i++){
			if(items[i]>a)
				a = items[i];
		}
		remove(a);
		return true;
	}
}


template<class ItemType>
void Bag<ItemType>::sortA()
{
	int c;
	for(int i=0;i<itemCount; i++){
		for(int j=i+1;j<itemCount;j++){
			if(items[i]>items[j]){
				c=items[i];
				items[i]=items[j];
				items[j]=c;
			}
		}
	}
}

#endif