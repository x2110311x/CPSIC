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
Schedule::Schedule(Date newDate) {
	date = newDate;
	DateTime startTime;
	DateTime endTime;
	startTime.day = date.day;
	startTime.month = date.month;
	startTime.year = date.year;
	startTime.dayOfWeek = date.dayOfWeek;
	endTime.day = date.day;
	endTime.month = date.month;
	endTime.year = date.year;
	endTime.dayOfWeek = date.dayOfWeek;
	for (int i = 10; i < 16; ++i) {
		startTime.hour = i;
		startTime.minute = 0;
		endTime.hour = i;
		endTime.minute = 30;

		AppointmentSlot slotToAdd1(startTime, endTime);
		availableSlots.push_back(slotToAdd1);

		startTime.hour = i;
		startTime.minute = 30;
		endTime.hour = i+1;
		endTime.minute = 0;

		AppointmentSlot slotToAdd2(startTime, endTime);
		availableSlots.push_back(slotToAdd2);
	}
}

Schedule::Schedule()
{
	Date date;
	DateTime startTime;
	DateTime endTime;
	startTime.day = date.day;
	startTime.month = date.month;
	startTime.year = date.year;
	startTime.dayOfWeek = date.dayOfWeek;
	endTime.day = date.day;
	endTime.month = date.month;
	endTime.year = date.year;
	endTime.dayOfWeek = date.dayOfWeek;
	for (int i = 10; i < 16; ++i) {
		startTime.hour = i;
		startTime.minute = 0;
		endTime.hour = i;
		endTime.minute = 30;

		AppointmentSlot slotToAdd1(startTime, endTime);
		availableSlots.push_back(slotToAdd1);

		startTime.hour = i;
		startTime.minute = 30;
		endTime.hour = i + 1;
		endTime.minute = 0;

		AppointmentSlot slotToAdd2(startTime, endTime);
		availableSlots.push_back(slotToAdd2);
	}
}

Schedule::Schedule(Date d, vector<Appointment> a, vector<AppointmentSlot> as) {
	date = d;
	appointments = a;
	availableSlots = as;
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
	return availableSlots;
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
	removeAvailableSlot(appointment.getDateTime());
	return;
}

/**
* Sets the Appointment Slot object Filled to false
* Remove an appointment to the booked appointments
*/
void Schedule::removeAppointment(Appointment appointment) {
	for (vector<Appointment>::iterator itr = appointments.begin(); itr != appointments.end(); ++itr) {
		if (*itr == appointment)
			itr = appointments.erase(itr);
	}
	availableSlots.push_back(appointment.getDateTime());
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
	for (vector<AppointmentSlot>::iterator itr = availableSlots.begin(); itr != availableSlots.end(); ++itr) {
		if (*itr == slot)
			itr = availableSlots.erase(itr);
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
