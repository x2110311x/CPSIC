/**
 * TestResult.cpp
 * 
 * Declaration of TestResult
 */

#include "TestResult.h"
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Test Result:: Test Result object default constructor
 * 
 */
TestResult::TestResult(){


}

/**
 * @brief Construct a new Test Result:: Test Result object
 * 
 * @param newTimeReceived 
 * @param newResult 
 */
TestResult::TestResult(Test newTest, DateTime newTimeReceived, string newResult)
{
    test = newTest;
    timeReceived = newTimeReceived;
    result = newResult;
}

/**
 * @brief Destroy the Test Result:: Test Result object
 * 
 */
TestResult::~TestResult(){

    cout<< "Test Result being deleted" ;

}

/**
 * Get the Test object
 */
Test TestResult::getTest(){
    
    return test;
}

/**
 * Get the Time Received object
 */
DateTime TestResult::getTimeReceived(){
    
    return timeReceived;
}

/**
 * Get the Result object
 */
string TestResult::getResult(){
    
    return result;

}

/**
 * Set the Test object
 */
void TestResult::setTest(Test newTest){

    test = newTest;
}

/**
 * Set the Time Received object
 */
void TestResult::setTimeReceived(DateTime newTime){

    timeReceived = newTime;

}

/**
 * Set the Result object
 */
void TestResult::setResult( string newResult){

result = newResult;

}