/**
 * @class Personnel
 * 
 * Defines the object of an employee of the KSU health services
 * that provides care
 * 
 * @author Alex Sweeney
 * 
 * @version 1.0
 * 
 * Created on Sun Mar 29 2020
 */

#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <string>
#include "AppointmentSlot.h"

using namespace std;

class Personnel {
    private: // attributes
        string name;                   ///< The name of the personnel
        string type;                   ///< The type of the peronnel: Nurse or Counselor
        int employeeID;                ///< The employeeID of the personnel
        AppointmentSlot *workingTimes; ///< Dynamic array that defines their schedule

    public:
        // Accessors

        /** @brief Retrieve the name of the personnel
         * @return string The name of the personnel
         */
        string getName();

        /** @brief Retrieve the type of the personnel
         * @return string The type of the personnel
         */
        string getType();

        /** @brief Retrieve the id of the personnel
         * @return int The id of the personnel
         */        
        int getEmployeeId();

        /** @brief Retrieve the schedule of the personnel
         * @return AppointmentSlot* The schedule of the personnel
         */        
        AppointmentSlot* getWorkingTimes();

        // Modifiers

        /** @brief Set the type of the personnel
         * @param type The type of the personnel
         * @return none
         */        
        void setType(string type);

        /** @brief Set the name of the personnel
         * @param name The name of the personnel
         * @return none
         */        
        void setName(string name);

        /** @brief Set the id of the personnel
         * @param employeeID The id of the personnel
         * @return none
         */
        void setEmployeeId(int employeeID);

        /** @brief Add a working time of the personnel
         * @param workTime The working time of the personnel
         * @return none
         */
        void addWorkingTime(AppointmentSlot workTime);

        /** @brief Remove a working time of the personnel
         * @param workTime The working time of the personnel
         * @return none
         */
        void removeWorkingTime(AppointmentSlot workTime)

};

#endif