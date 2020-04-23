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
AppointmentSlot::AppointmentSlot(DateTime newStartTime, DateTime newEndTme){

    startTime = newStartTime;
    endTime = newEndTime;

}

/**
 * @brief Destroy the Appointment Slot:: Appointment Slot object
 * 
 */
AppointmentSlot::~AppointmentSlot(){

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