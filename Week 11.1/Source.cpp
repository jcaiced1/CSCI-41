#include <iostream>
#include "Queue.h"
#include "Node.h"
using namespace std;

int main() 
{
	Queue<int>myQueue;
	for(int i=0;i<5;i++){
		myQueue.enqueue(i*i);
	}
	myQueue.display();
	system("pause");
	return 0;
}