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
AppointmentSlot::AppointmentSlot(DateTime newStartTime, DateTime newEndTme, int ref, bool f){

    startTime = newStartTime;
    endTime = newEndTime;
    refNum = ref;
    filled = f;
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

/**
 * Set the reference number of the slot
 */
void AppointmentSlot::setRefNum(int num) {
	refNum = num;
	return;
}

/**
 * Set whether the slot is villed or not
 */
void AppointmentSlot::setFilled(int i) {
	if (i == 0)
		filled = 0;
	if (i == 1)
		filled = 1;
	return;
}
