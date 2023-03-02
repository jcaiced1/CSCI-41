#include <iostream>
#include "PQueue.h"
#include "Node.h"
#include "PatientRecord.h"

using namespace std;

int main() 
{
	int s = 0;
	PQueue<PatientRecord> patientQueue;	//creates an object
	string last, first, dob, sym;
	int pN;		
	label:cout << "Please select one of the following: " << endl;
	cout << "+----------------------------------+\n";
	cout << "|  1. Register a Patient           |\n";
	cout << "|  2. Display Patients Queue       |\n";
	cout << "|  3. Remove a Patient from Queue  |\n";
	cout << "|  4. Close the Registration       |\n";
	cout << "+----------------------------------+\n";
	cin >> s;
	if(s == 1){
		cout<<"Please enter patient's last name: "<<endl;
		cin>>last;
		cout<< "Please enter patient's first name: "<<endl;
		cin>>first;
		cout<<"Please enter patient's date of birth"<<endl;
		cout<<"(in the form of mm-dd-yyyy)"<<endl;
		cin>>dob;
		cout<<"Please enter patient's symptom "<<endl;
		cin.ignore();
		getline(cin, sym); //check if it works
		cout<<"Please enter priority number:"<<endl;
		cin>>pN;
		PatientRecord *pr=new PatientRecord(last, first, dob, sym, pN);
		patientQueue.enqueue(*pr);
		goto label;
	}
	if(s==2){
		patientQueue.displayQueue();
		goto label;
	}
	if(s==3){
		patientQueue.dequeue();
		cout<<"Patient removed from list"<<endl;
		goto label;
	}
	if(s==4){
		cout << "Registration is closed. Exit the program.\n";
		exit (1);
	}else{
		cout << "Invalid input, please enter only 1, 2, 3, or 4\n";
		goto label;
	}
	return 0;
}