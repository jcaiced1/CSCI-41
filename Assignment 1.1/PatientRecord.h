#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class PatientRecord
{
private:
	string lastName;
	string firstName;
	string SYMPTOMS;
	double PRIORITY;
public:
	//Constructor
	PatientRecord();
	PatientRecord(string last, string first, string symptoms, double priority);
	//Set and Get Functions
	void setLastName(string last);
	string getLastName();
	void setFirstName(string first);
	string getFirstName();
	void setSymptoms(string symptoms);
	string getSymptoms();
	void setPriority(double priority);
	double getPriority();
	//Utility Functions
	void display();
};
//Implementation of Member Functions
PatientRecord::PatientRecord()
{
	lastName = "None";
	firstName = "None";
	SYMPTOMS = "----";
	PRIORITY = 0;
}
PatientRecord::PatientRecord(string last, string first, string symptoms, double priority)
{
	lastName = last;
	firstName = first;
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
	cout << left << endl;
	cout << "============================================" << endl;
	cout << setw(30) << "Patient's last name:" << setw(10) << lastName << endl;
	cout << setw(30) << "Patient's first name:" << setw(10) << firstName << endl;
	cout << setw(30) << "Patient's symptoms:" << setw(10) << SYMPTOMS << endl;
	cout << setw(80) << "Patient Priority (from 1 to 10 with 1 being the highest priority number):" << setw(10) << PRIORITY << endl;
	cout << "============================================" << endl;
}