#include<iostream>
#include"Node.h"
#include "List.h"
int main()
{
    List<int> aList;
    
    //Test insert() funciton
    for(int i=0;i<5;i++)
        aList.insert(1,i+1);
    cout<<"The numbers in the list are:\n";
    aList.displayList();
    cout<<"============\n";
    aList.insert(10, 5);
    cout<<"============\n";
    aList.insert(0, 5);
    cout<<"============\n";
    aList.insert(5, 100);
    cout<<"============\n";
    cout<<"The numbers in the list are:\n";
    aList.displayList();
    aList.insert(7, 500);
    cout<<"============\n";
    cout<<"The numbers in the list are:\n";
    aList.displayList();
    cout<<"============\n";
    
    //Test remove() function
    aList.remove(0);
    aList.remove(10);
    cout<<"============\n";
    aList.remove(7);
    aList.displayList();
    cout<<"============\n";
    aList.remove(3);
    aList.displayList();
    cout<<"============\n";
    
    //Test getLength(), getEntry(), and setEntry() funcitons
    cout<<"The length of the list is "<<aList.getLength()<<endl;
    cout<<"============\n";
    cout<<"The number in the second position is "<<aList.getEntry(2)<<endl;
    cout<<"============\n";
    aList.setEntry(4, 800);
    aList.displayList();
    cout<<"============\n";
    
    //Test copy constructor and clear() funciton
    List<int> bList(aList);
    bList.displayList();
    cout<<"============\n";
    aList.clear();
    aList.displayList();
    cout<<"============\n";
    bList.displayList();
    cout<<"============\n";
    return 0;
}