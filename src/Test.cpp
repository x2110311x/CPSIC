/**
 * Test.cpp
 * 
 * Declaration of Test
 */

#include "Test.h"

using namespace std;
/**
 * @brief Construct a new Test:: Test object default constructor
 * 
 */
Test::Test(){

}
/**
 * @brief Construct a new Test:: Test object
 * 
 * @param newTimePerformed 
 * @param newPatient 
 * @param newType 
 */
Test::Test(DateTime newTimePerformed, Patient newPatient, string newType){

    timePerformed = newTimePerformed;
    patient = newPatient;
    type = newType;

}
/**
 * @brief Destroy the Test:: Test object
 * 
 */
Test::~Test(){

    cout << "Test being deleted";
}

/**
 * Get the Time Performed object
 */
DateTime Test::getTimePerformed(){
   
    return timePerformed;
}

/**
 * Get the Patient object
 */
Patient Test::getPatient(){
   
    return patient;
}

/**
 * Get the Type object
 */
string Test::getType(){
    
    return type;
}

/**
* Set the Time Performed object
*/
void Test::setTimePerformed(DateTime newTime){

    timePerformed = newTime;

}

/**
 * Set the Patient object
 */
void Test::setPatient(Patient newPatient){

    patient = newPatient;

}

/**
 * Set the Type object
 */
void Test::setType(string newType){

    type = newType;

}