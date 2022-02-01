#include<iostream>
#include<fstream>
using namespace std;

class Rectangle
{
private:
	double length;
	double width;
public:
	Rectangle(); // default constructor
	Rectangle(double w, double l);  // non default constructor
	void setLength(double l);
	void setWidth(double w);
	void display();					//class definition 
	friend ostream &operator<<(ostream &out,Rectangle rec);
	friend Rectangle operator+(Rectangle a, Rectangle b); //grants access to the private data (its been used to make the operator overloading work
	friend Rectangle operator*(Rectangle a, Rectangle b);
};
Rectangle::Rectangle()		// constructor (default) doesnt record any input
{
	length = 0;
	width = 0;
}

Rectangle::Rectangle(double w, double l)	// constructor (non default)
{
	length = l;
	width = w;
}
void Rectangle::setLength(double l)	// it is necessary to keep it if you want to change it later
{
	length = l;
}
void Rectangle::setWidth(double w)	// it is necessary to keep it if you want to change it later
{
	width = w;
}
void Rectangle::display()
{
	cout << "This is a rectangle." << endl;
	cout << "The length is " << length << endl;
	cout << "The width is " << width << endl;
}													//class implementation
Rectangle operator+(Rectangle a, Rectangle b)  //operator overloading
{
	Rectangle c;
	c.setLength(a.length + b.length);
	c.setWidth(a.width + b.width);
	return c;
}
Rectangle operator*(Rectangle a, Rectangle b)  //operator overloading
{
	Rectangle c;
	c.setLength(a.length * b.length);
	c.setWidth(a.width * b.width);
	return c;
}
ostream &operator<<(ostream &out,Rectangle rec)
{
	out<<"The length is "<<rec.length<<endl;
	out<<"The width is "<<rec.width<<endl;
	return out;
}