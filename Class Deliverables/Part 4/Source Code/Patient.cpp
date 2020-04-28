/**
 * Patient.cpp
 * 
 * Declaration of the PatientClass
 */

#include "Patient.h"

using namespace std;

/**
 * @brief Construct a new Patient:: Patient object default constructor
 * 
 */
Patient::Patient() {
    string name = "";
    string gender = "";
    string race = "";
    string patientType = "";
    long ksuID = 0;
    Date dob;
}

/**
 * @brief Construct a new Patient:: Patient object
 * 
 * @param newName 
 * @param newGender 
 * @param newRace 
 * @param newPatientType 
 * @param newKsuID 
 * @param newDob 
 */
Patient::Patient(string newName, string newGender, string newRace, string newPatientType, long newKsuID, Date newDob){
    name = newName;
    gender = newGender;
    race = newRace;
    patientType = newPatientType;
    ksuID = newKsuID;
    dob = newDob;
}

/**
 * Return the patient's name
 */
string Patient::getName(){
   
    return name;
}

/**
 * Return the patient's gender
 */
string Patient::getGender(){
    
    return gender;
}

/**
 * Return the patient's race
 */
string Patient::getRace(){
   
    return race;
}

/**
 * Return the patient's type
 */
string Patient::getPatientType(){
    
    return patientType;
}

/**
 * Return the patient's date of birth
 */
Date Patient::getDob(){
    
    return dob;
}

/**
 * Return the patient's KSU ID
 */
long Patient::getKSUID(){
    
    return ksuID;
}


/**
 * Set the patient's type
 */
void Patient::setPatientType(string newPatientType){

patientType = newPatientType;
    
}

/**
 * Set the patient's name
 */
void Patient::setName(string newName){

name = newName;

}

/**
 * Set the patient's gender
 */
void Patient::setGender(string newGender){

gender = newGender;

}

/**
 * Set the patient's race
 */
void Patient::setRace(string newRace){

race=newRace;

}

bool Patient::operator==(Patient a)
{
    return (name == a.name && gender == a.gender && dob == a.dob && race == a.race && ksuID == a.ksuID && patientType == a.patientType);
}

/**
 * Set the patient's date of birth
 */
void Patient::setDob(Date newDob){

dob = newDob;
}

/**
 * Set the patient's KSU ID
 */
void Patient::setKSUID(long newKsuID){

 ksuID=newKsuID;   

}
