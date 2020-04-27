/**
 * @class AppointmentSlot
 * 
 * @brief This class defines the timeslots of appointments, used to mark
 * the times of appointments, personnel working times,
 * and available appointment slots.
 * 
 * @author Alex Sweeney
 * 
 * @version 1.0
 * 
 * Created on Sun Mar 29 2020
 */

#ifndef APPOINTMENTSLOT_H
#define APPOINTMENTSLOT_H

#include "datetime.h"

using namespace std;

class AppointmentSlot{
    private: // Attributes
        DateTime startTime;   ///< The Start Time of the appointment
        DateTime endTime;     ///< The end time of the appointment
    
    public:
        /** @brief Creates a new AppointmentSlot Object
         */
        AppointmentSlot(DateTime newStartTime, DateTime newEndTme);
        AppointmentSlot();
        // Accessors

        /** @brief Retrieve the starting time of the slot
         * @return DateTime the starting time of the AppointmentSlot
         */
        DateTime getStartTime();

        /** @brief Retrieve the ending time of the slot
         * @return DateTime the ending time of the AppointmentSlot
         */
        DateTime getEndTime();

        // Modifiers

        /** @brief Set the starting time of the slot
         * @param startTime The start of the appointment
         * @return none
         */
        void setStartTime(DateTime startTime);

        /** @brief Set the ending time of the slot
         * @param endTime The ending of the appointment
         * @return none
         */
        void setEndTime(DateTime endTime);

        bool operator==(AppointmentSlot a);
};

#endif