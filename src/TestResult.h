/**
 * @file TestResult.h
 * @author Adam Adkins
 * @brief Defines the structure for storing lab test results
 * @version 0.1
 * @date 2020-04-02
 * @copyright Copyright (c) 2020
 */

#ifndef TESTRESULT_H
#define TESTRESULT_H

#include <string>
#include "DateTime.h"
#include "Patient.h" 
#include "Test.h"

using namespace std;

class TestResult : public Test
{

    private:       
        DateTime timeReceveived;
        string result;
      
    public:
        /**
         * @brief Construct a new Test Result object
         * 
         */
        TestResult();
        /**
         * @brief Construct a new Test Result object
         * 
         * @param test 
         * @param timePerformed 
         * @param timeReceveived 
         * @param patient 
         * @param result 
         * @param type 
         */
        TestResult(Test test, DateTime timePerformed, DateTime timeReceveived, Patient patient, string result, string type);
        
        /**
         * @brief Destroy the Test Result object
         * 
         */
        ~TestResult();
       
        /**
         * @brief Get the Test object
         * 
         * @return Test 
         */
        Test getTest();

         /**
         * @brief Get the Time Received object
         * 
         * @return DateTime 
         */
        DateTime getTimeReceived();

        /**
         * @brief Get the Result object
         * 
         * @return string 
         */
        string getResult();
   
        /**
         * @brief Set the Test object
         * 
         * @param test 
         */
        void setTest(Test test);

        /**
         * @brief Set the Time Received object
         * 
         * @param time 
         */
        void setTimeReceived(DateTime time);

        /**
         * @brief Set the Result object
         * 
         * @param result 
         */
        void setResult( string result);
};

#endif