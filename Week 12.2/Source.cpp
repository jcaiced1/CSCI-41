#include <iostream>
using namespace std;

//Examples of recursive functions
//recursive functions are the functions that call themselves


//reverse function
void display(int a)
{
	if(a==1)
		cout<<a<<endl;
	else{
		display(a-1); //change the order of these 2 arguments to make it backwards
		cout<<a<<endl;
	}
}

//question: write a resucrsive function that receives an integer and returns the sum 
// of all the integers from 1 up to the integer the function receives.

int sum(int a) 
{
	int s = 0;
	if(a==1)
		return a;
	else{
		s=a+sum(a-1);
		return s;
	}
	
}

//question: try to find the minimum

int sum(int a[], int length)
{
	int s;
	if(length==1)
		return a[0];
	else{
		s=a[length-1]+sum(a,length-1);//the sum of the rest of the number in the array
		return s;
	}
	
}
//display the last one first
void display(int a[], int length)
{
	if(length==1)
		cout<<a[0]<<endl;
	else{
		cout<<a[length-1]<<endl;
		display(a, length-1);
	}
}

bool contains(int key, int a[], int length)
{
	if(length==1){
		if(key==a[0])
			return true;
		else
			return false;
	} 
	else{
		if(a[length-1]==key)
			return true;
		else{
			return contains(key, a, length-1);
		}
	}
}

int smallest(int a[], int length)
{
	if(length==1){
		return a[0];
	}
	else{
		int s=smallest(a,length-1);
		if(s<a[length-1])
			return s;
		else
			return a[length-1];
	}
}

int largest(int a[], int length) //check
{
	if(length==1){
		return a[0];
	}
	else{
		int s=smallest(a,length-1);
		if(s>a[length-1])
			return s;
		else
			return a[length-1];
	}
}


int main() 
{
	int a;
	int b[3]={3,1,5};
	int c;
	cout<<"The sum is "<<sum(b,3)<<endl;
	display(b,3);
	cout<<"enter key ";
	cin>>c;
	if(contains(c,b,3))
		cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	;
	cout<<"The smallest is: "<<smallest(b, 3)<<endl;
	cout<<"The largest is: "<<largest(b, 3)<<endl;
	system("pause");
	return 0;
}

