/**
* @class Report
*
* @brief This class generates a report of the earnings of 
* the doctors and therapists
*
* @author Scott Caldwell
*
* @version 1.0
*
* Created on Sun Mar 29 2020
*/

#ifndef Report_h
#define Report_h

#include "datetime.h"
#include <string>

using namespace std;

class Report {
private:
	// attributes
	DateTime dateGenerated;		///< The date the report was generated
	string reportData;	///< The data of the report
public:
	//constructors
	Report();
	Report(DateTime dateGenerated, string reportData);

	//Destructor
	~Report();

	//Accessors

	/** @brief Retrieve the date the report was generated
	* @return DateTime the date the report was generated
	*/
	DateTime getDateGenerated();

	/** @brief Retrieve the data of the report
	* @return String the data of the report
	*/
	string getReportData();

	//Modifiers

	/** @brief set the date of the report
	* @param DateTime the date of the report being generated
	* @return None
	*/
	void setDateGenerated(DateTime date);

	/** @brief set the data of the report
	* @param String the data the report consists of
	* @return None
	*/
	void setReportData(string data);
};
#endif
