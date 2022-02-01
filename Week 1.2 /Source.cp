#include<iostream>
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{
	//Rectangle a, b;
	//a.setLength(5);
	//a.setWidth(7);
	//a.display();
	//b.display();
	//return 0;

	Rectangle a(3, 9), b(2,4), c; //constructor to initialize (non default constructor)
	
	int x = 5, y = 10, z;
	z = x + y;
	cout << "The value of z is " << z << endl;
	c = a + b; //operator overloading (additions, substractions, etc, between objects)
	c.display();
	c = a * b; //operator overloading (additions, substractions, etc, between objects)
	// cout << c << endl; // <-- Lecture 1.7
	c.display();

	Circle d(5), e;
	d.display();
	e.display();

	system("pause");
	return 0;

}