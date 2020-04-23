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

}  
/**
 * @brief Construct a new Appointment:: Appointment object
 * 
 * @param newDateTime 
 * @param newPatient 
 * @param newType 
 * @param newPersonnel 
 */
Appointment::Appointment(DateTime newDateTime, Patient newPatient, string newType, Personnel newPersonnel) 

{ 

dateTime = newDateTime; 

patient = newPatient; 

type = newType; 

personnel = newPersonnel; 

}
/**
 * @brief Destroy the Appointment:: Appointment object
 * 
 */
Appointment::~Appointment(){

delete []s;

}

/**
 * Get the Date Time object
 */
DateTime Appointment::getDateTime(){
   
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
void Appointment::setDateTime(DateTime newDateTime){

dateTime = newDateTime;

}