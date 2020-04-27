/**
 * AppointmentSlot.cpp
 * 
 * Declaration of AppointmentSlot
 */

#include "AppointmentSlot.h"

using namespace std;

/**
 * @brief Construct a new Appointment Slot:: Appointment Slot object default constructor
 * 
 */
AppointmentSlot::AppointmentSlot(){


}

/**
 * @brief Construct a new Appointment Slot:: Appointment Slot object
 * 
 * @param newStartTime 
 * @param newEndTme 
 */
AppointmentSlot::AppointmentSlot(DateTime newStartTime, DateTime newEndTime){

    startTime = newStartTime;
    endTime = newEndTime;

}

/**
 * Return the starting time of the slot
 */
DateTime AppointmentSlot::getStartTime(){

    return startTime;
}

/**
 * Return the ending time of the slot
 */
DateTime AppointmentSlot::getEndTime(){
    
    
    return endTime;
}

/**
 * Set the starting time of the slot
 */
void AppointmentSlot::setStartTime(DateTime newStartTime){
    
    startTime = newStartTime;    
}

/**
 * Set the ending time of the slot
 */
void AppointmentSlot::setEndTime(DateTime newEndTime){

    endTime = newEndTime;
}

bool AppointmentSlot::operator==(AppointmentSlot a)
{
    return(startTime == a.startTime && endTime == a.endTime);
}
