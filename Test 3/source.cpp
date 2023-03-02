#include<iostream>
#include"SortedList.h"
#include"Node.h"
using namespace std;
int main()
{
         int a;
         SortedList<int> myList;
         myList.insertSorted(7);
         myList.insertSorted(11);
         myList.insertSorted(5);
         myList.insertSorted(3);
         myList.insertSorted(4);
         myList.insertSorted(7);
         myList.insertSorted(4);
         myList.displayList();
         cout << "-------\n";
         cout << myList.getPosition(8) << endl;;
         cout << myList.getPosition(4) << endl;;
         system("pause");
         return 0;
}