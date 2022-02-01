#ifndef _Bag
#define _Bag
#include<iostream>
using namespace std;

//class definition
template<class ItemType>	//Include a template to reuse the header
class Bag
{
private:
	ItemType items[100];		//Generic datatype
	int itemCount;
public:
	Bag();
	bool isEmpty();
	bool add(ItemType item);
	void display();
	bool contains(ItemType item);
};

//implementation
template<class ItemType>	//include <template<class ItemType> before every member function
Bag<ItemType>::Bag()		//include <ItemType> in front of every Bag
{
	itemCount = 0;
}
template<class ItemType>
bool Bag<ItemType>::add(ItemType item)		//write ItemType as the type of object
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
	if (itemCount==0){
		cout<<"It is an empty bag!"<<endl;
	}
	else {
		for(int i=0; i<itemCount; i++) { //itemCount her is important or else it would display number that are not even there
			cout<<items[i]<<endl;
		}
	}
}
template<class ItemType>
bool Bag<ItemType>::isEmpty()
{
	return(itemCount==0); //verify if the Bag is empty, true or false
}
template<class ItemType>
bool Bag<ItemType>::contains(ItemType item)		//ItemType as the kind of object inside
{
	for (int i=0; i<itemCount; i++){
		if(items[i]==item)
			return true;
		}
		return false;
	}
#endif