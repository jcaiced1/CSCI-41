#include<iostream>
#include"PatientRecord.h"
using namespace std;

int main()
{
	PatientRecord recordA;
	PatientRecord recordB("Caicedo", "Jose", "fever, headaches", 8.0);
	recordA.display();
	recordB.display();
	return 0;
}