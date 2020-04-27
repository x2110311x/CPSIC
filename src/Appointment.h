/**
 * @file Appointment.h
 * @author Adam Adkins
 * @brief Defines the class for storing appointments
 * @version 0.1
 * @date 2020-03-31
 * @copyright Copyright (c) 2020
 */

#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
#include "datetime.h"
#include "Personnel.h"
#include "AppointmentSlot.h"
#include "Patient.h" 

using namespace std;

class Appointment   {
    private:
        string type;
        Patient patient;
        Personnel personnel;
        AppointmentSlot dateTime;
        int refnum;

    public:
        /**
         * @brief Construct a new appointment object
         * 
         */
        Appointment();
        /**
         * @brief Construct a new appointment object
         * 
         * @param type 
         * @param patient 
         * @param personnel 
         * @param dateTime 
         * @param refnum
         */
        Appointment(string type, Patient patient, Personnel personnel, AppointmentSlot dateTime);

        /**
         * @brief Get the Date Time object
         * 
         * @return AppointmentSlot 
         */
        AppointmentSlot getDateTime();
        /**
         * @brief Get the Patient object
         * 
         * @return Patient 
         */
        Patient getPatient();
        /**
         * @brief Get the Type object
         * 
         * @return string 
         */
        string getType();
        /**
         * @brief Get the Personnel object
         * 
         * @return Personnel 
         */
        Personnel getPersonnel();
        /**
         *@brief Get the RefNum object
         *
         * @return int
         */
        int getRefNum();
        /**
         * @brief Set the Patient object
         * 
         * @param patient 
         */
        void setPatient(Patient patient);
        /**
         * @brief Set the Type object
         * 
         * @param type 
         */
        void setType(string type);
        /**
         * @brief Set the Personnel object
         * 
         * @param personnel 
         */
        void setPersonnel(Personnel personnel);
        /**
         * @brief Set the Date Time object
         * 
         * @param dateTime 
         */
        void setDateTime(AppointmentSlot dateTime);

        bool operator==(Appointment a);
};

#endif
