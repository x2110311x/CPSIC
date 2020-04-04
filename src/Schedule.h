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

using namespace std;

class Schedule {
    private: //attributes
        Date date;                       ///< The date the schedule is for
        Appointment *appointments;       ///< The currently booked appointments
        AppointmentSlot *availableSlots; ///< The available appointment slots
    public:
        // Accessors

        /** @brief Retrieve the date the schedule is for
         * @return Date the date the schedule is for
         */
        Date getDate();

        /** @brief Retrieve the currently booked appointments
         * @return Appointment* The currently booked appointments
         */
        Appointment* getAppointments();

        /** @brief Retrieve the currently available slots
         * @return AppointmentSlot* The currently available slots
         */
        AppointmentSlot* getAvailableSlots();

        // Modifiers

        /** @brief Set the date of the appointment
         * @param date The date the schedule is for
         * @return none
         */
        void setDate(Date date);

        /** @brief Add an appointment to the booked appointments
         * @param appointment The appointment to add
         * @return none
         */
        void addAppointment(Appointment appointment);

        /** @brief Remove an appointment to the booked appointments
         * @param appointment The appointment to remove
         * @return none
         */
        void removeAppointment(Appointment appointment);

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
};

#endif