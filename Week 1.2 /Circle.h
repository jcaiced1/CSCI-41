#include<iostream>
using namespace std;

class Circle
{
private: 
	double radius;
public:
	Circle();
	Circle(double r);
	void setRadius(double r);
	double getRadius();
	void display();
};
Circle::Circle ()		// constructor (default) doesnt record any input
{
	radius = 0;
}
Circle::Circle(double r)	// constructor (non default)
{
	radius = r;
}
void Circle::setRadius(double r)	// it is necessary to keep it if you want to change it later
{
	radius = r;
}
double Circle::getRadius() 
{
	return radius;
}
void Circle::display()
{
	cout << "The area of the circle is " << radius*radius * 3.14 << endl;
}