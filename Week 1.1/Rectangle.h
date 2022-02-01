//Header File of class Rectangle
#ifndef _Rectangle
#define _Rectangle
#include<iostream>
#include<fstream>
using namespace std;
class Rectangle
{
private:
    double length;
    double width;
public:
    //Default constructor:
    Rectangle();
    //Non-default constructor:
    Rectangle(double l, double w);
    Rectangle(double l);
    void setLength(double l);
    double getLength();
    void setWidth(double w);
    double getWidth();
    double area() const;
    void display();
    bool operator<(const Rectangle &Rec) const;
    bool operator>=(const Rectangle &Rec) const;
    Rectangle operator+(const Rectangle &Rec) const;
};
//Definitions of constructors;
Rectangle::Rectangle()
{
    length = 1;
    width = 1;
}
Rectangle::Rectangle(double L)
{
    length = L;
    width = 1;
}
Rectangle::Rectangle(double l, double w)
{
    length = l;
    width = w;
}
//Definition of Methods:
void Rectangle::setLength(double l)
{
    length = l;
}
double Rectangle::getLength()
{
    return length;
}
void Rectangle::setWidth(double w)
{
    width = w;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::area() const
{
    return length * width;
}
void Rectangle::display()
{
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 or i == length - 1 or j == 0 or j == width - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
//Operator overloading functions
bool Rectangle::operator<(const Rectangle &Rec) const
{
    return (this->area() < Rec.area());
}
bool Rectangle::operator>=(const Rectangle &Rec) const
{
    return (this->area() >= Rec.area());
}
Rectangle Rectangle::operator+(const Rectangle &Rec) const
{
    double l = this->length + Rec.length;
    double w = this->width + Rec.width;
    Rectangle s(l, w);
    return s;
}
ostream &operator<<(ostream &streamOut, Rectangle aRec)
{
    {
        for (int i = 0; i < aRec.getLength(); i++) {
            for (int j = 0; j < aRec.getWidth(); j++) {
                if (i == 0 or i == aRec.getLength() - 1 or j == 0 or j == aRec.getWidth() - 1) 
                    streamOut << "* ";
                else
                    streamOut << "  ";
            }
            streamOut << endl;
        }
    }
    return streamOut;
}
#endif