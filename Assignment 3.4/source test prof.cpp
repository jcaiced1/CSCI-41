#include <iostream>
#include "PQueue.h"
#include "Node.h"
#include "PatientRecord.h"

using namespace std;

int main() 
{
	
	int s = 0;
	string last, first, sym;
	int pN;							//priority number

	do {
		cout << "Please select one of the following: " << endl;
		cout << "+----------------------------------+\n";
		cout << "| 1./Register a Patient            |\n";
		cout << "| 2. Display Patients Queue        |\n";
		cout << "| 3. Remove a Patient from Queue   |\n";
		cout << "| 3. Close registration            |\n";
		cout << "+----------------------------------+\n";
		PQueue<PatientRecord> patientQueue;	//creates an object
		PatientRecord *pr;
		PatientRecord myRecord("Jin","He","05-18-1991" ,"Fever",6);
		cin >> s;
		switch (s) {
			case 1:

				/*cout<<"Please enter last name: "<<endl;
				cin>>last;
				cout<< "Please enter first: "<<endl;
				cin>>first;
				cout<<"Please enter symptom "<<endl;
				//cin get line
				cin.ignore();
				getline(cin, sym); //check if it works
				cout<<"Enter pN:"<<endl;
				cin>>pN;*/
				//pr=new PatientRecord(last, first, sym, pN); // must be the same as PatiendtRecord.h
				patientQueue.enqueue(myRecord);
				break;
			case 2:
				patientQueue.displayQueue();
				break;
			case 3:
				patientQueue.dequeue();
				break;
			case 4:
				cout << "You choose to exit the program.\n";
				break;
			default:
				cout << "Invalid input, please enter only 1, 2, 3, or 4\n";
		}
	} while (s!=4);
	return 0;
}

//basic, make it a while do loop with switch

/*
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
*/


//lower pN to front