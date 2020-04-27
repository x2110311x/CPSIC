/**
* Personnel.cpp
*
* Declaration of Personnel
*/


#include "Personnel.h"

using namespace std;

Personnel::Personnel() {
	string name = "";
	string type = "";
	long employeeID = 0;
	vector<AppointmentSlot> workingTimes = {};
}

Personnel::Personnel(string newName, string newType, long newId, vector<AppointmentSlot> newWorkingTimes) {
	name = newName;
	type = newType;
	employeeID = newId;
	workingTimes = newWorkingTimes;
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
long Personnel::getEmployeeId(){
	return employeeID;
}

/**
* get the Working Times vector
*/
vector<AppointmentSlot> Personnel::getWorkingTimes() {
	return workingTimes;
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
void Personnel::setEmployeeId(long id) {
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
	for (vector<AppointmentSlot>::iterator itr = workingTimes.begin(); itr != workingTimes.end(); ++itr) {
		if (*itr == w);
			itr = workingTimes.erase(itr);
	}
	return;
}

bool Personnel::operator==(Personnel a)
{
	return (name == a.name && type == a.type && employeeID == a.employeeID);
}
