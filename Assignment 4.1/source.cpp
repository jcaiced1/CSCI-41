//Assignment 4.1 (Recursive Functions)

#include <iostream>
using namespace std;

//	Write a recursive C++ function that receives a positive integer n 
//	and prints the integers 1, 2, 3, …, n. Using following function header:
//	void display(int n);

void display(int n)
{
	if(n==1){
		cout<<n<<endl;
	}
	else{
		display(n-1);
		cout<<n<<endl;
	}
}

//	Write a recursive C++ function that receives a positive integer n and returns 
//	the sum of the squares of all the numbers from 1 to n. Using following function header:
//	int sumSquares(int n);

int sumSquares(int n)
{
	int s=0;
	if(n==1){
		return n;
	}else{
		s=(n*n)+sumSquares(n-1);
		return s;
	}
}

//	Write a C++ recursive function that receives an integer array along with its length, 
//	the function returns true if the array contains 0, and returns false otherwise. 
//	Using following function header:	bool containZero(int a[ ], int length);

bool containZero(int a[], int length)
{
	if(length==1){
		if(a[0]==0)
			return true;
		else
			return false;
	} 
	else{
		if(a[length-1]==0)
			return true;
		else{
			return containZero(a, length-1);
		}
	}
}

//	Write a recursive function that receives an integer array along with its length and 
//	then returns minimum of the numbers in the array. Using following function header:
//	int min(int a[], int length);

int min(int a[], int length)
{
	if(length==1){
		return a[0];
	}else{
		int m=min(a,length-1);
		if(m<a[length-1])
			return m;
		else
			return a[length-1];
	}
}

int main() {
	cout<<"=== Question 1 ==="<<endl;
	display(5);
	cout<<"=== Question 2 ==="<<endl;
	cout<<sumSquares(3)<<endl;
	cout<<"=== Question 3 ==="<<endl;
	int a[3]={0,1,4};
	if(containZero(a,0))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	cout<<"=== Question 4 ==="<<endl;
	cout<<"The minimun of the numbers in the array is: "<<min(a, 3)<<endl;
	system("pause");
	return 0;
}