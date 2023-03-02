#include <iostream>
#include "PQueue.h"
#include "Node.h"
#include "PatientRecord.h"

using namespace std;

int main() 
{
	//basic, make it a while do loop with switch
	
	PQueue<PatientRecord>patientQueue;	//creates an object
	string last, first, sym;
	int pN;							//priority number
	cout<<"Please enter last name: "<<endl;
	cin>>last;
	cout<< "Please enter first: "<<endl;
	cin>>first;

	cout<<"Please enter symptom "<<endl;
	//cin get line
	cin.ignore();
	getline(cin, sym); //check if it works
	cout<<"Enter pN:"<<endl;
	cin>>pN;

	PatientRecord *pr=new PatientRecord(last, first, sym, pN); // must be the same as PatiendtRecord.h
	patientQueue.enqueue(*pr);
	patientQueue.displayQueue();
	system("pause");
	return 0;
}

//lower pN to front