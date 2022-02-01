#include<iostream>
#include "Bag.h"
#include"Circle.h"
using namespace std;

int main()
{
	/*
	Bag<int> myBag;  // this code is intented for integers myBag is going to be equal to zero
	int a;
	
	for(int i=0;i<50;i++) {
		a = rand()%20;				//only displays 1 item that is not repeated 
		if(!myBag.contains(a)) {
			myBag.add(a);
		}
	}
	
	cout<<"The max is: "<<myBag.getMax()<<endl;
	cout<<"The min is: "<<myBag.getMin()<<endl;
	
	//myBag.remove(myBag.getMax());
	myBag.removeMax();
	myBag.remove(myBag.getMin());
	
	myBag.sortA();
	myBag.display();
	cout<<"The sum is: "<<myBag.getSum()<<endl;
	system("pause");
	*/
	
	Circle a[6] = { Circle(5),Circle(7),Circle(3),Circle(6),Circle(1),Circle(2) };
	Bag<Circle> myBag;
	for (int i = 0; i < 6; i++) {
		myBag.add(a[i]);
	}
	Circle aCircle(11);
	if (myBag.contains(aCircle)) {
		cout << "The cicle is in the bag." << endl;
	}
	else {
		cout << "The circle is not in the bag." << endl;
	}
	cout << "The largest circle in the bag is " << myBag.getMax() << endl;
	cout << "The sum of the circles in the bag is " << myBag.getSum() << endl;

	return 0;
}

