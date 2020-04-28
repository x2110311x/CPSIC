/**
* Report.cpp
*
* Declaration of Report
*/


#include "Report.h"

using namespace std;

Report::Report() {

}

Report::Report(DateTime dG, string rD) {
	dateGenerated = dG;
	reportData = rD;
}

//Destructor
Report::~Report() {

}

//Accessors
/**
* get the Date Generated object
*/
DateTime Report::getDateGenerated() {
	return dateGenerated;
}

/**
* get the Report Data object
*/
string Report::getReportData() {
	return reportData;
}

//Modifiers
/**
* set the Date Generated object
*/
void Report::setDateGenerated(DateTime date) {
	dateGenerated = date;
	return;
}

/**
* set the Report Data object
*/
void Report::setReportData(string data) {
	reportData = data;
	return;
}
