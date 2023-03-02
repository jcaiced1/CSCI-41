#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class PatientRecord
{
private:
	string lastName;
	string firstName;
	string dateOfBirth;
	string SYMPTOMS;
	double PRIORITY;
public:
	//Constructor
	PatientRecord();
	PatientRecord(string last, string first, string dob, string symptoms, double priority);
	//Set and Get Functions
	void setLastName(string last);
	string getLastName();
	void setFirstName(string first);
	string getFirstName();
	void setDateOfBirth(string dob);
	string getDateOfBirth();
	void setSymptoms(string symptoms);
	string getSymptoms();
	void setPriority(double priority);
	double getPriority();
	//Utility Functions
	void display();
	//insert operator overload for greater than 
	//insert operator overload for cout
};
//Implementation of Member Functions
PatientRecord::PatientRecord()
{
	lastName = "None";
	firstName = "None";
	SYMPTOMS = "----";
	PRIORITY = 0;
}
PatientRecord::PatientRecord(string last, string first, string dob, string symptoms, double priority)
{
	lastName = last;
	firstName = first;
	dateOfBirth = dob;
	SYMPTOMS = symptoms;
	PRIORITY = priority;
}
void PatientRecord::setLastName(string last)
{
	lastName = last;
}
string PatientRecord::getLastName()
{
	return lastName;
}
void PatientRecord::setFirstName(string first)
{
	firstName = first;
}
string PatientRecord::getFirstName()
{
	return firstName;
}
void PatientRecord::setDateOfBirth(string dob)
{
	dateOfBirth = dob;
}
string PatientRecord::getDateOfBirth()
{
	return dateOfBirth;
}
void PatientRecord::setSymptoms(string symptoms)
{
	SYMPTOMS = symptoms;
}
string PatientRecord::getSymptoms()
{
	return SYMPTOMS;
}
void PatientRecord::setPriority(double priority)
{
	PRIORITY = priority;
}
double PatientRecord::getPriority()
{
	return PRIORITY;
}
void PatientRecord::display()
{
	cout << left ;
	cout << "===== Priority Number "<<PRIORITY<<" =====" << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "First Name: " << firstName << endl;
	cout << "The date of Birth: " << dateOfBirth << endl;	
	cout << "The symptom: " << SYMPTOMS << endl;

}
bool operator>(PatientRecord r1,PatientRecord r2)
{
	return r1.getPriority()>r2.getPriority();
}
ostream& operator<<(ostream &out, PatientRecord aRecord)
{
	aRecord.display();
	return out;
}

//overload operators to accept compare records > greater than for sorted list for priority number probably friend function