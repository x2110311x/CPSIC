/**
* Personnel.cpp
*
* Declaration of Personnel
*/


#include "Personnel.h"

using namespace std;

Personnel::Personnel() {

}

Personnel::Personnel(string n, string t, int id, vector<AppointmentSlot> w) {
	name = n;
	type = t;
	employeeID = id;
	workingTimes = w;
}

/**
* get the Name object
*/
string Personnel::getName() {
	return name;
}

/**
* get the Type object
*/
string Personnel::getType() {
	return type;
}

/**
* get the Employee ID object
*/
int Personnel::getEmployeeId() {
	return employeeID;
}

/**
* get the Working Times vector
*/
vector<AppointmentSlot> Personnel::getWorkingTimes() {
	return workingTimes;
}

/**
* get the Appointment Slot object
*/
AppointmentSlot Personnel::getAppointmentSlot(int ref) {
	for (vector<AppointmentSlot>::iterator it = workingTimes.begin(); it != workingTimes.end(); ++it) {
		if (it->getRefNum() == ref) {
			return *it;
			break;
		}
		return *it;
	}
}

/**
* Set the Type object
*/
void Personnel::setType(string t) {
	type = t;
	return;
}

/**
* Set the Name object
*/
void Personnel::setName(string n) {
	name = n;
	return;
}

/**
* Set the Employee ID object
*/
void Personnel::setEmployeeId(int id) {
	employeeID = id;
	return;
}

/**
* Add a Working Time object to a vector
*/
void Personnel::addWorkingTime(AppointmentSlot w) {
	workingTimes.push_back(w);
	return;
}

/**
* Remove a Working Time object from a vector
*/
void Personnel::removeWorkingTime(AppointmentSlot w) {
	for (vector<AppointmentSlot>::iterator it = workingTimes.begin(); it != workingTimes.end(); ++it) {
		if (it->getRefNum() == w.getRefNum())
			workingTimes.erase(it);
	}
	return;
}
