/**
* @file PersonnelSchedule.h
* @author Adam Adkins
* @brief Defines the daily schedule of appointments for a specific Personnel
* @version 0.1
* @date 2020-03-31
* @copyright Copyright (c) 2020
*/

#ifndef PERSONNELSCHEDULE_H
#define PERSONNELSCHEDULE_H

#include <string>
#include "datetime.h"
#include "Personnel.h"
#include "Appointment.h"
#include "AppointmentSlot.h"
#include "Schedule.h"

using namespace std;

class PersonnelSchedule : public Schedule {


private:
	Personnel personnel;

public:
	/**
	* @brief Construct a new Personel Shedule object
	*
	*/
	PersonnelSchedule();
	/**
	* @brief Construct a new Personel Shedule object
	*
	* @param personnel
	* @param date
	* @param appointments
	* @param AvailableSlots
	*/
	PersonnelSchedule(Personnel p, Date d, vector<Appointment> a, vector<AppointmentSlot> as);
	/**
	* @brief Destroy the Personel Shedule object
	*
	*/
	~PersonnelSchedule();

	/**
	* @brief Get the Personnel object
	*
	* @return Personnel
	*/
	Personnel getPersonnel();

	/**
	* @brief Set the Personnel object
	*
	* @param personnel
	*/
	void setPersonnel(Personnel p);
};

#endif
