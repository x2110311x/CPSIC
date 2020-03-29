/**
 * @class Date
 * 
 * Defines the Date objects for appointment slots
 * and other classes, since C++ contains no built-in
 * class for this purpose
 * 
 * @author Alex Sweeney
 * 
 * @version 1.0
 * 
 * Created on Sun Mar 29 2020
 */

#ifndef DATETIME_H
#define DATETIME_H

#include <string>

using namespace std;


struct Date {
    int day;           ///< The day of the month
    int month;         ///< The number of the month
    int year;          ///< The four digit year
    string dayOfWeek;  ///< The name of the day of the week
};


/**
 * @class DateTime
 * 
 * Defines the DateTime objects for appointment slots
 * and other classes, since C++ contains no built-in
 * class for this purpose.
 * Inherits from Date and adds the time attributes
 * 
 * @author Alex Sweeney
 * 
 * @version 1.0
 * 
 * Created on Sun Mar 29 2020
 */
struct DateTime : Date{ 
    int hour;     ///< The number of the hour (24h clock)
    int minute;   ///< The number of the minute
    int seconds;  ///< The number of seconds
};

#endif