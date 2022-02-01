//main.cpp
//CSCI 41 Operator Overloading

#include<iostream>

#include"Circle.h"
using namespace std;

int main()
{
	//Rectangle A(6,4),B(3,7),C;
	//C=A+B;
	//C.display();

	Circle a[6]={Circle(5), Circle(7), Circle(2), Circle(3), Circle(5), Circle(6)};
	
	Circle t=a[0];
	for(int i=1; i<6; i++){
		t=t+a[i];
	}
	cout<<"The sum of the circles is "<<endl;
	cout<<t<<endl;

	return 0;
}