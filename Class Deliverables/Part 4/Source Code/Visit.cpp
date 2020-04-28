/**
 * Visit.cpp
 * 
 * Declaration of Visit
 */

#include "Visit.h"

using namespace std;

/**
 * @brief Construct a new Visit:: Visit object default constructor
 * 
 */
Visit::Visit(){


}

/**
 * @brief Construct a new Visit:: Visit object
 * 
 * @param newType 
 * @param newPatient 
 * @param newPersonnel 
 * @param newTestResult 
 * @param newTest 
 * @param newDateTime 
 */
Visit::Visit(string newType, Patient newPatient, Personnel newPersonnel, TestResult newTestResult, Test newTest, AppointmentSlot newDateTime){

    type = newType;
    patient = newPatient;
    personnel = newPersonnel;
    testResult = newTestResult;
    test = newTest;
    dateTime = newDateTime;
}

Visit::~Visit(){

}

/**
 * @brief Get the Date Time object
 */
AppointmentSlot Visit::getDateTime(){
    
    return dateTime;
}

/**
 * @brief Get the Patient object
 */
Patient Visit::getPatient(){
    
    return patient;
}

/**
 * @brief Get the Type object
 */
string Visit::getType(){
   
    return type;
}

/**
 * @brief Get the Personnel object
 */
Personnel Visit::getPersonnel(){
    
    return personnel;
}

/**
 * @brief Get the Test object
 */
Test Visit::getTest(){
    
    return test;
}

/**
 * @brief Get the Test Results object
 */
TestResult* Visit::getTestResults(){
    
    return &testResult;
}


/**
 * @brief Set the Patient object
 */
void Visit::setPatient(Patient newPatient){

patient = newPatient;    
}

/**
 * @brief Set the Type object
 */
void Visit::setType(string newType){

type = newType;

}

/**
 * @brief Set the Personnel object
 */
void Visit::setPersonnel(Personnel newPersonnel){

    personnel = newPersonnel;

}

/**
 * @brief Set the Date Time object
 */
void Visit::setDateTime(AppointmentSlot newDateTime){

    dateTime = newDateTime;

}

/**
 * @brief Add a test to the appointment
 */
void Visit::addTest(Test newTest){

test = newTest;

}

/**
 * @brief Remove a test from the appointment
 */
void Visit::removeTest(Test test){


}

/**
 * @brief Record a test result for the appointment
 */
void addTestResult(TestResult testResult){
    return;
}

/**
 * @brief Remove a testresult from the appointment
 */
void removeTestResult(TestResult testResult){
    return;
}