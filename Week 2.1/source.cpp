#include <iostream>
#include"Bag.h"

using namespace std;

int main()
{
	Bag myBag;  // myBag is going to be equal to zero
	int a;
	for(int i=1;i<=50;i++) {
			a = rand()%20;				//only displays 1 item that is not repeated 
			if(!myBag.contains(a)) {
				cout<<a<<endl;
				myBag.add(a);
			}
			// myBag.add(rand()%20);
		}
	
	//myBag.display();
	
	
	//myBag.display();
	//if(myBag.contains(49))
	//	cout <<"The bag contains 49"<<endl;
	//else
	//	cout <<"49 is not in the bag."<<endl;
	
	
	
	system("pause");
	return 0;
}