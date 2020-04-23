/**
* @class Schedule
*
* @brief Defines the daily schedule of appointments
*
* @author Alex Sweeney
*
* @version 1.0
*
* Created on Sun Mar 29 2020
*/

#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "AppointmentSlot.h"
#include "datetime.h"
#include "Appointment.h"
#include <vector>

using namespace std;

class Schedule {
private: //attributes
	Date date;                       ///< The date the schedule is for
	vector<Appointment> appointments;       ///< The currently booked appointments
	vector<AppointmentSlot> availableSlots; ///< The available appointment slots
	//friend ostream& operator<<(ostream& os, const vector<AppointmentSlot>& a);
public:
	Schedule();
	Schedule(Date d, vector<Appointment> a, vector<AppointmentSlot> as);
	~Schedule();
	// Accessors

	/** @brief Retrieve the date the schedule is for
	* @return Date the date the schedule is for
	*/
	Date getDate();

	/** @brief Retrieve the currently booked appointments
	* @return Appointment* The currently booked appointments
	*/
	vector<Appointment> getAppointments();

	/** @brief Retrieve the currently available slots
	* @return AppointmentSlot* The currently available slots
	*/
	vector<AppointmentSlot> getAvailableSlots();

	// Modifiers

	/** @brief Set the date of the appointment
	* @param date The date the schedule is for
	* @return none
	*/
	void setDate(Date d);

	/** @brief Add an appointment to the booked appointments
	* @param appointment The appointment to add
	* @return none
	*/
	void addAppointment(Appointment a);

	/** @brief Remove an appointment to the booked appointments
	* @param appointment The appointment to remove
	* @return none
	*/
	void removeAppointment(Appointment a);

	/** @brief Add a set of Appointments
	* @param vector<Appointment> The vector of appointments to be added
	* @return none
	*/
	void setAppointments(vector<Appointment> a);

	/** @brief Add an Appointment Slot to the available Appointment Slots
	* @param slot The AppointmentSlot to add
	* @return none
	*/
	void addAvailableSlot(AppointmentSlot slot);

	/** @brief Remove an Appointment Slot to the available Appointment Slots
	* @param slot The AppointmentSlot to remove
	* @return none
	*/
	void removeAvailableSlot(AppointmentSlot slot);

	/** @brief Add a set of AppointmentSlots
	* @param vector<AppointmentSlot> The vector of appointments to be added
	* @return none
	*/
	void setAvailableSlots(vector<AppointmentSlot> a);
};

#endif
