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
	int getItemCount();
	bool isEmpty();
	bool add(int item);
	void display();
	bool contains(int item);
	bool remove(int item);
	int getMax();
	int getMin();
	int getSum();
	void sortA();
	int getLast();
	bool containsOdd();
};

//implementation

Bag::Bag()
{
	itemCount = 0;
}
int Bag::getItemCount()
{
	return itemCount;
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
int Bag::getMax()
{
	if(itemCount==0){
		exit(1);
	}
	int t =items[0];
	for(int i=0;i<itemCount;i++){
		if(items[i]>t){
			t=items[i];
		}
	}
	return t;
	}
int Bag::getMin()
	{
		if(itemCount==0){
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
int Bag::getSum(){
	if(itemCount==0){
		exit(1);
	}
	int s=0;
	for(int i=0;i<itemCount;i++){
		s+=items[i];
	}
	return s;
}
bool Bag::remove(int item)
{
	if (itemCount == 0) {
		return false;
	}
	else {
		int index = 0;
		for (int i = 0; i < itemCount; i++) {
			if (items[i] == item) {
				index = i;
				for (int k = index; k < itemCount - 1; k++) {
					items[k] = items[k + 1];
				}
				itemCount--;
				return true;
			}
		}
		return false;
	}
}
void Bag::sortA(){
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

int Bag::getLast()
{
	if(itemCount==0){
		exit(1);
	}
	int t =items[0];
	for(int i=0; i<itemCount;i++){
		t=items[i];
	}
		return t;
		}
bool Bag::containsOdd()
{
	if(itemCount==0){
		exit(1);
	}
	for (int i=0; i<itemCount; i++){
		if(items[i]%2!=0){
			return true;
		}
}
return false;
}



#endif