#include <iostream>
#include"Bag.h"
#include<string>
#include"Rectangle.h"

using namespace std;

int main()
{
	int a;
	Bag<int> myBag;  // gives the ability to handle integers
	for(int i=0;i<50;i++) {
			a = rand()%20;				//only displays 1 item that is not repeated 
			if(!myBag.contains(a)) {
				myBag.add(a);
			}
		}
		myBag.display();
		
	Bag<char> charBag; //creates a Bag that holds the ability to hol,]d characters
	char b[10]={'$','r','&','a','7','H','E','%','!','*'};
	for(int i=0;i<10;i++){
		charBag.add(b[i]);
	}
	charBag.display();
	
	Bag<string> anotherBag;
	anotherBag.add("Spring");
	anotherBag.add("Summer");
	anotherBag.add("Fall");
	anotherBag.add("Winter");
	
	anotherBag.display();
	
	Bag<Rectangle> recBag;
	Rectangle c[5]={Rectangle(2,5),Rectangle(4,7),Rectangle(8,3),Rectangle(6,2),Rectangle(5,5)};
	for(int i=0;i<5;i++){
		recBag.add(c[i]);
	}

	recBag.display();
	
	system("pause");
	return 0;
}