#include <iostream>
#include "Bag.h"

using namespace std;
int main() {
	int a,b;
	int c=0;
	Bag myBag;
	for (int i=0; i<6; i++)
	{
		a=rand()%100;
		if(!myBag.contains(a)) {
			myBag.add(a);
		}
	}
	myBag.display();
	for (int i=0; i<2;i++)
		{
		cout<<"Please make a guess"<<endl;
		cin>>b;
		if(myBag.contains(b))
			{
			c=c+10;
		}
			}
		
		
		
		
	cout<<"Your Score is: "<<endl;
	cout<<c<<endl;
	system("pause");
	return 0;
	}
	

	