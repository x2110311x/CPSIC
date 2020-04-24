/**
* Schedule.cpp
*
* Declaration of Schedule
*/


#include "Schedule.h"

using namespace std;

/**
* Constructor that sets all the Available Slot objects in a vector in 30 min increments
* Sets the Reference Number member for Available Slot objects from 1 to 12
* Sets the Filled member for the Available Slot objects to false
*/
Schedule::Schedule() {
	for (vector<AppointmentSlot>::iterator it = availableSlots.begin(); it != availableSlots.end(); ++it) {
		int mi = 00;
		int hr = 10;
		int i = 1;
		if (it == availableSlots.begin()) {
			it->setStartTime(hr, mi, 00);
			it->setEndTime(hr, mi + 30, 00);
			it->setRefNum(i);
			it->setFilled(0);
			i++;
		}
		if(mi = 00){
			mi = 30;
			it->setStartTime(hr, mi, 00);
			it->setEndTime(hr, mi - 30, 00);
			it->setRefNum(i);
			it->setFilled(0);
			i++;
		}
		if (mi = 30) {
			mi = 00;
			hr += 1;
			it->setStartTime(hr, mi, 00);
			it->setEndTime(hr, mi + 30, 00);
			it->setRefNum(i);
			it->setFilled(0);
			i++;
		}
	}
}

Schedule::Schedule(Date d, vector<Appointment> a, vector<AppointmentSlot> as) {
	date = d;
	appointments = a;
	availableSlots = as;
}

Schedule::~Schedule() {

}

/**
* Return the date of the schedule
*/
Date Schedule::getDate() {
	return date;
}

/**
* Return the booked appointments for that date
*/
vector<Appointment> Schedule::getAppointments() {
	return appointments;
}

/**
* Adds all appointment slots that are not filled for that date into temporary vector
* Return the available appointment slots for that date
*/
vector<AppointmentSlot> Schedule::getAvailableSlots() {
	vector<AppointmentSlot>temp;
	for (vector<AppointmentSlot>::iterator it = availableSlots.begin(); it != availableSlots.end(); ++it) {
		if (!it->getFilled())
			temp.push_back(*it);
	}
	return temp;
	//return availableSlots;
}

/**
* Set the date for the schedule
*/
void Schedule::setDate(Date d) {
	date = d;
	return;
}

/**
* Add an appointment to the booked appointments
* Sets the Appointment Slot object Filled to true
*/
void Schedule::addAppointment(Appointment appointment) {
	appointments.push_back(appointment);
	for (vector<AppointmentSlot>::iterator it = availableSlots.begin(); it != availableSlots.end(); ++it) {
		if (it->getRefNum() == appointment.getRefNum())
			it->setFilled(1);
	}
	return;
}

/**
* Sets the Appointment Slot object Filled to false
* Remove an appointment to the booked appointments
*/
void Schedule::removeAppointment(Appointment appointment) {
	for (vector<AppointmentSlot>::iterator it = availableSlots.begin(); it != availableSlots.end(); ++it) {
		if (it->getRefNum() == appointment.getRefNum())
			it->setFilled(0);
	}
	for (vector<Appointment>::iterator it = appointments.begin(); it != appointments.end(); ++it) {
		if (it->getRefNum() == appointment.getRefNum()) {
			appointments.erase(it);
		}
	}
	return;
}

/**
* Add a vector of appointments
*/
void Schedule::setAppointments(vector<Appointment> a) {
	appointments = a;
	return;
}

/**
* Add an Appointment Slot to the available Appointment Slots
*/
void Schedule::addAvailableSlot(AppointmentSlot slot) {
	availableSlots.push_back(slot);
	return;
}

/**
* Remove an Appointment Slot to the available Appointment Slots
*/
void Schedule::removeAvailableSlot(AppointmentSlot slot) {
	for (vector<AppointmentSlot>::iterator it = availableSlots.begin(); it != availableSlots.end(); ++it) {
		if (it->getRefNum() == slot.getRefNum())
			it->setFilled(1);
			//availableSlots.erase(it);
	}

	return;
}

/**
* Add a vector of appointmentSlots
*/
void Schedule::setAvailableSlots(vector<AppointmentSlot> a) {
	availableSlots = a;
	return;
}
