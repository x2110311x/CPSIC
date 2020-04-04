/**
 * @file visit.h
 * @author Adam Adkins
 * @brief Defines the actual occurence of visits
 * @version 0.1
 * @date 2020-03-31 
 * @copyright Copyright (c) 2020
 */

#ifndef VISIT_H
#define VISIT_H

#include <string>
#include "datetime.h"
#include "Personnel.h"
#include "AppointmentSlot.h" 
#include "Patient.h"
#include "Test.h"
#include "TestResult.h"

using namespace std;

class Visit{

    private:
        string type;
        Patient patient;
        Personnel personnel;
        TestResult testResult;
        Test test;
        AppointmentSlot dateTime;

    public:
        /**
         * @brief Construct a new Visit object
         * 
         */
        Visit();
        /**
         * @brief Construct a new Visit object
         * 
         * @param type 
         * @param patient 
         * @param personnel 
         * @param testResult 
         * @param test 
         * @param dateTime 
         */
        Visit(string type, Patient patient, Personnel personnel, TestResult testResult,Test test, AppointmentSlot dateTime);
        /**
         * @brief Destroy the Visit object
         * 
         */
        ~Visit();

        /**
         * @brief Get the Date Time object
         * 
         * @return DateTime 
         */
        DateTime getDateTime();
        /**
         * @brief Get the Patient object
         * 
         * @return Patient 
         */
        Patient getPatient();
        /**
         * @brief Get the Type object
         * 
         * @return string 
         */
        string getType();
        /**
         * @brief Get the Personnel object
         * 
         * @return Personnel 
         */
        Personnel getPersonnel();
        /**
         * @brief Get the Test object
         * 
         * @return Test 
         */
        Test getTest();
        /**
         * @brief Get the Test Results object
         * 
         * @return TestResults 
         */
        TestResult* getTestResults();

        /**
         * @brief Set the Patient object
         * 
         * @param patient 
         */
        void setPatient(Patient patient);
        /**
         * @brief Set the Type object
         * 
         * @param type 
         */
        void setType(string type);
        /**
         * @brief Set the Personnel object
         * 
         * @param personnel 
         */
        void setPersonnel(Personnel personnel);
        /**
         * @brief Set the Date Time object
         * 
         * @param dateTime 
         */
        void setDateTime(DateTime dateTime);
        /**
         * @brief Add a test to the appointment
         * 
         * @param test the test to record
         */
        void addTest(Test test);
        /**
         * @brief Remove a test from the appointment
         * 
         * @param test the rest to remove
         */
        void removeTest(Test test);
        /**
         * @brief Record a test result for the appointment
         * 
         * @param testResult The testresult to add
         */
        void addTestResult(TestResult testResult);
        /**
         * @brief Remove a testresult from the appointment
         * 
         * @param testResult The test to remove
         */
        void removeTestResult(TestResult testResult);
};
#endif