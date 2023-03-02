#include <iostream>
#include "PQueue.h"
#include "PatientRecord.h"
using namespace std;

int main() {
	PQueue<PatientRecord> ERQueue;
	PatientRecord a[5]={
		PatientRecord("He", "J", "Headache", 8),
		PatientRecord("Smith","D","Back Hurt", 6),
		PatientRecord("Jones","M", "Short of Breadth", 2),
		PatientRecord("Lee", "B", "Fever", 4),
		PatientRecord("Chang", "V", "Broken Bone", 2)};
	for (int i=0;i<5;i++){
		ERQueue.enqueue(a[i]);
	}
	ERQueue.displayQueue();
	return 0;
}