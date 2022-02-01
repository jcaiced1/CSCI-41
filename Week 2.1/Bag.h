#ifndef _Bag
#define _Bag
#include<iostream>
using namespace std;

//class definition

class Bag
{
private:
	int items[100];
	int itemCount;
public:
	Bag();
	bool isEmpty();
	bool add(int item);
	void display();
	bool contains(int item);
};

//implementation

Bag::Bag()
{
	itemCount = 0;
}
bool Bag::add(int item)
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
void Bag::display()
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
bool Bag::isEmpty()
{
	return(itemCount==0); //verify if the Bag is empty, true or false
}
bool Bag::contains(int item)
{
	for (int i=0; i<itemCount; i++){
		if(items[i]==item)
			return true;
		}
		return false;
	}
#endif