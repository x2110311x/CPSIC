/**
 * @file visit.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-03-31
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <string>
#include datetime.h
#include Personnel.h
#include AppointmentSlot.h 
#include Patient.h
#include Test.h
#include TestResult.h 

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
        TestResults getTestResults();

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
         * @brief 
         * 
         * @param test 
         */
        void addTest(Test test);
        /**
         * @brief 
         * 
         * @param test 
         */
        void removeTest(Test test);
        /**
         * @brief 
         * 
         * @param testResult 
         */
        void addTestResult(TestResult testResult);
        /**
         * @brief 
         * 
         * @param testResult 
         */
        void removeTestResult(TestResult testResult);


}










