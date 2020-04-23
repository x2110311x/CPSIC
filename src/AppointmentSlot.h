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
        int refNum;	  ///< reference number for the slot
	    bool filled;	///< Whether the slot is filled or not with an appointment
    
    public:
        // Accessors

        /** @brief Retrieve the starting time of the slot
         * @return DateTime the starting time of the AppointmentSlot
         */
        DateTime getStartTime();

        /** @brief Retrieve the ending time of the slot
         * @return DateTime the ending time of the AppointmentSlot
         */
        DateTime getEndTime();
    
        /** @brief Retrieve the reference number of the slot
         * @return int the reference number of the slot
         */
    	int getRefNum();
	    
        /** @brief Retrieve whether the slot is filled or not
         * @return bool whether the slot is filled or not
         */
        bool getFilled();

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
    
        /** @brief Set the refernece number of the slot
         * @param int the reference number of the slot
         * @return none
         */
    	void setRefNum(int num);
    
        /** @brief Set whether the slot is filled or not
         * @param int 1 if the slot is filled, 0 if it is empty
         * @return none
         */
	    void setFilled(int i);
};

#endif
