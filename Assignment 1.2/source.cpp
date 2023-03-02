#include<iostream>
#include"Circle.h"
#include"Rectangle.h"
using namespace std;

int main()
{
	Circle a[6]={Circle(5), Circle(7), Circle(2), Circle(3), Circle(5), Circle(6)};
	Circle t=a[0];
	for(int i=1; i<6; i++){
		t=t+a[i];
	}
	cout<<"The sum of the circles is "<<endl;
	cout<<t<<endl;
	
	Rectangle b(3, 9);
	b.display();
	
	return 0;
}