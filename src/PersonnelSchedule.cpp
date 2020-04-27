/**
* PersonnelSchedule.cpp
*
* Declaration of PersonnelSchedule
*/

#include "PersonnelSchedule.h"
using namespace std;

PersonnelSchedule::PersonnelSchedule(Date newDate){
	Personnel personnel;
}

PersonnelSchedule::PersonnelSchedule(Personnel p, Date d, vector<Appointment> a, vector<AppointmentSlot> as){
	personnel = p;
	setDate(d);
	setAppointments(a);
	setAvailableSlots(as);
}

PersonnelSchedule::~PersonnelSchedule()
{
}

/**
* Get the Personnel object
*/
Personnel PersonnelSchedule::getPersonnel()
{
	return personnel;
}

/**
* Set the Personnel object
*/
void PersonnelSchedule::setPersonnel(Personnel p)
{
	personnel = p;
	return;
}
