/**
 * @file Test.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-03-31
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include DateTime.h
#include Patient.h

class Test{
    private:
        DateTime timePerformed;
        Patient patient;
        string type;
    public:
        /**
         * @brief Construct a new Test object
         * 
         */
        Test();
        /**
        * @brief Construct a new Test object
        * 
        * @param timePerformed 
        * @param patient 
        * @param type 
        */
        Test(DateTime timePerformed, Patient patient, string type);
        /**
         * @brief Destroy the Test object
         * 
         */
        ~Test();
        /**
         * @brief Get the Time Performed object
         * 
         * @return DateTime 
         */
        DateTime getTimePerformed();
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
        * @brief Set the Time Performed object
         * 
         * @param time 
        */
        void setTimePerformed(DateTime time);
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
        setType(string type);


}
