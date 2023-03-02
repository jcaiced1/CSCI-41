#include <iostream>
#include "Queue.h"
#include "Node.h"
using namespace std;

int main() 
{
	Queue<int>myQueue;
	for(int i=0;i<2;i++){
		myQueue.enqueue(rand()%9);
	}
	myQueue.display();
	cout<<"======="<<endl;
	myQueue.dequeue();
	myQueue.display();
	cout<<"======="<<endl;
	cout<<myQueue.peekFront()<<endl;
	system("pause");
	return 0;
}