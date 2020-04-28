/**
 * Appointment.cpp
 * 
 * Declaration of Appointment
 */

#include "Appointment.h"

using namespace std;
/**
 * @brief Construct a new Appointment:: Appointment object default constructor
 * 
 */
Appointment::Appointment(){
    Patient patient;
    AppointmentSlot dateTime;
    string type;
    Personnel personnel;
}

/**
 * @brief Construct a new Appointment:: Appointment object
 * 
 * @param newDateTime 
 * @param newPatient 
 * @param newType 
 * @param newPersonnel
 * @param r
 */
Appointment::Appointment(string newType, Patient newPatient, Personnel newPersonnel, AppointmentSlot newDateTime)
{ 

    dateTime = newDateTime; 

    patient = newPatient; 

    type = newType; 

    personnel = newPersonnel; 

refNum = r;
}


/**
 * Get the Date Time object
 */
AppointmentSlot Appointment::getDateTime(){
   
    return dateTime;
}

/**
 * Get the Patient object
 */
Patient Appointment::getPatient(){
   
    return patient;
}

/**
 * Get the Type object
 */
string Appointment::getType(){
    
    return type;
}

/**
 * Get the Personnel object
 */
Personnel Appointment::getPersonnel(){
    
    return personnel;

}

/**
 * Get the reference number object
 */
int Appointment::getRefNum() {
	return refNum;
}

/**
 * Set the Patient object
 */
void Appointment::setPatient(Patient newPatient){
    
patient = newPatient;

}

/**
 * Set the Type object
 */
void Appointment::setType(string newType){

type = newType;

}

/**
 * Set the Personnel object
 */
void Appointment::setPersonnel(Personnel newPersonnel){
    
personnel = newPersonnel;

}

/**
 * Set the Date Time object
 */
void Appointment::setDateTime(AppointmentSlot newDateTime){

    dateTime = newDateTime;

}

bool Appointment::operator==(Appointment a)
{
    return (patient == a.patient && dateTime == a.dateTime && type == a.type && personnel == a.personnel);
}
