#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <string>
#include "AppointmentSlot.h"
#include<vector>

using namespace std;

class Personnel {
private: ///< attributes
	string name;                   ///< The name of the personnel
	string type;                   ///< The type of the peronnel: Nurse or Counselor
	long employeeID;                ///< The employeeID of the personnel
	vector<AppointmentSlot> workingTimes; ///< Dynamic array that defines their schedule...also changed this to vector
	///<friend ostream& operator<<(ostream& os, const Personnel& a);
public:
	///<constructors
	Personnel();
	Personnel(string name, string type, long id, vector<AppointmentSlot> workingTimes);

	///< Accessors
	/** @brief Retrieve the name of the personnel
	* @return String the name of the personnel
	*/
	string getName();

	/** @brief Retrieve the type of personnel
	* @return String the type of personnel
	*/
	string getType();

	/** @brief Retrieve the ID of the personnel
	* @return long The ID of the personnel
	*/
	long getEmployeeId();

	/** @brief Retrieve a vector of working times of the personnel
	* @return Vector<AppointmentSlot> a vector of working times of the personnel
	*/
	vector<AppointmentSlot> getWorkingTimes(); ///<changed this to vector
	
	///<modifiers
	/** @brief Set the Type of personnel
	* @param String The type of the personnel
	* @return None
	*/
	void setType(string t);

	/** @brief Set the Name of the personnel
	* @param String The name of the personnel
	* @return None
	*/
	void setName(string n);

	/** @brief set the ID of the personnel
	* @param long the ID number of the personnel
	* @return None
	*/
	void setEmployeeId(long id);

	/** @brief Add an appointment slot to the working times of the personnel
	* @param AppointmentSlot The appointment slot that will be added to the working times of the personnel
	* @return None
	*/
	void addWorkingTime(AppointmentSlot w);

	/** @brief Remove an appointment slot from the working times of the personnel
	* @param AppointmentSlot The appointment slot that will be removed from the working times of the personnel
	* @return None
	*/
	void removeWorkingTime(AppointmentSlot w);

	bool operator==(Personnel a);

};

#endif
