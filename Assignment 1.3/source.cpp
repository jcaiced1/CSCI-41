#include <iostream>
#include"Bag.h"

using namespace std;

int main()
{
	/*
	Bag myBag;  // myBag is going to be equal to zero
	int a;

	
	for(int i=0;i<50;i++) {
			a = rand()%20;				//only displays 1 item that is not repeated 
			if(!myBag.contains(a)) {
				myBag.add(a);
			}
		}
	cout<<myBag.containsOdd()<<endl;

	cout<<"The max is: "<<myBag.getMax()<<endl;
	cout<<"The min is: "<<myBag.getMin()<<endl;

	myBag.remove(myBag.getMax());
	myBag.remove(myBag.getMin());
	
	myBag.sortA();
	myBag.display();
	cout<<"the last is"<<myBag.getLast()<<endl;

	cout<<"The sum is: "<<myBag.getSum()<<endl;
	
	*/
	
	Bag myBag;  // myBag is going to be equal to zero
	int a;
	
	for(int i=0;i<50;i++) {
		a = rand()%99;				//only displays 1 item that is not repeated 
		if(!myBag.contains(a)) {
			myBag.add(a);
		}
	}
	myBag.display();
	system("pause");
	return 0;
}