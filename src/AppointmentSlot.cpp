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
 * @param ref
 * @param f
 */
AppointmentSlot::AppointmentSlot(DateTime newStartTime, DateTime newEndTime){

    startTime = newStartTime;
    endTime = newEndTime;
    refNum = ref;
    filled = f;
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
 * Return the reference number of the slot
 */
int AppointmentSlot::getRefNum() {
	return refNum;
}

/**
 * Return whether the slot is filled or not
 */
bool AppointmentSlot::getFilled() {
	return filled;
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
