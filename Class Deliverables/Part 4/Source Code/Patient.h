/**
 * @class Patient
 * 
 * @brief This class defines the object to store patient data.
 * 
 * @author Alex Sweeney
 * 
 * @version 1.0
 * 
 * Created on Sun Mar 29 2020
 */

#ifndef PATIENT_H
#define PATIENT_H


#include <string>
#include "datetime.h"

using namespace std;
class Patient {
    private: // attributes
        string name;        ///< The full name of the patient
        string gender;      ///< The gender of the patient
        string race;        ///< The race of the patient
        string patientType; ///< The type of patient - student or faculty
        long ksuID;          ///< The patient's Kent State ID number
        Date dob;           ///< The patient's date of birth

    public:
        Patient();
        Patient(string newName, string newGender, string newRace, string newPatientType, long newKsuID, Date newDob);
        // Accessors

        /** @brief Retrieve the name of the patient
         * @return string The full name of the patient
         */
        string getName();

        /** @brief Retrieve the gender of the patient
         * @return string The gender of the patient
         */
        string getGender();

        /** @brief Retrieve the race of the patient
         * @return string The race of the patient
         */
        string getRace();

        /** @brief Retrieve the type of the patient
         * @return string The type of the patient
         */
        string getPatientType();

        /** @brief Retrieve the date of birth of the patient
         * @return Date The date of birth of the patient
         */
        Date getDob();

        /** @brief Retrieve the KSU ID of the patient
         * @return long The KSU ID of the patient
         */
        long getKSUID();

        // Modifiers

        /** @brief Set the type of the patient
         * @param patienttype The type of the patient
         * @return none
         */
        void setPatientType(string patienttype);

        /** @brief Set the full name of the patient
         * @param name The full name of the patient
         * @return none
         */
        void setName(string name);

        /** @brief Set the KSU ID of the patient
         * @param ksuID The KSU ID of the patient
         * @return none
         */
        void setKSUID(long ksuID);

        /** @brief Set the gender of the patient
         * @param gender The gender of the patient
         * @return none
         */
        void setGender(string gender);

        /** @brief Set the date of birth of the patient
         * @param dob The date of birth of the patient
         * @return none
         */
        void setDob(Date dob);

        /** @brief Set the race of the patient
         * @param race The race of the patient
         * @return none
         */
        void setRace(string race);

        bool operator==(Patient a);
};

#endif