#include <iostream>
#include <iomanip>
#include <string>
#include "Appointment.h"
#include "AppointmentSlot.h"
#include "datetime.h"
#include "Invoice.h"
#include "Patient.h"
#include "Payment.h"
#include "Personnel.h"
#include "PersonnelSchedule.h"
#include "Report.h"
#include "Schedule.h"
#include "Test.h"
#include "TestResult.h"
#include "visit.h"

using namespace std;

void mainMenu(vector<Schedule> &fullSchedule, vector<Invoice> &billing, vector<Visit> &visits);
void patientMenu(vector<Schedule> &fullSchedule, vector<Invoice> &billing, vector<Visit> &visits);
void personnelMenu(vector<Schedule> &fullSchedule, vector<Invoice> &billing, vector<Visit> &visits);
int appointmentMenu(vector<Schedule> &fullSchedule, char type);
void visitMenu(vector<Schedule> &fullSchedule, vector<Visit> &visits, char type);
void billingMenu(vector<Invoice> &billing);
void printSchedule(vector<Schedule> &fullSchedule);
vector<Invoice> getInvoice(vector<Invoice> billing, Patient patient);
Date getDatefromCLI();

int main() {
	vector<Schedule> fullSchedule;
	vector<Invoice> billing;
	vector<Visit> visits;
	cout << "Welcome to the Coronavirus Pandemic System Integrated Control" << endl << "Please note this system is still in development" << endl << endl;
	system("pause");
	system("cls");
	mainMenu(fullSchedule, billing, visits);
	return 0;
}

void mainMenu(vector<Schedule> &fullSchedule, vector<Invoice> &billing, vector<Visit> &visits){
	char choice;
	bool exitFlag = false;
	do {
		cout << "Are you a patient or KSU-HS Personnel?" << endl;
		cout << "1.\tPatient" << endl;
		cout << "2.\tPersonnel" << endl;
		cout << "0.\tExit" << endl;
		cout << endl << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case '1':
			patientMenu(fullSchedule, billing, visits);
			break;
		case '2':
			personnelMenu(fullSchedule, billing, visits);
			break;
		case '0':
			exitFlag = true;
			break;
		default:
			cout << "That is not a valid choice!" << endl;
			system("PAUSE");
			break;
		}
		system("cls");
	} while (!exitFlag);
	return;
}

void patientMenu(vector<Schedule> &fullSchedule, vector<Invoice> &billing, vector<Visit> &visits){
	string name;
	char genderChoice;
	string gender = "none";
	string race;
	string patientType = "none";
	char patientTypeChoice;
	long ksuID;
	string ksuIDentry;
	Date dob;
	string dobEntry;
	int month, day, year;

	getline(cin, name); // clear the buffer from using cin
	cout << "Please enter your name: ";
	getline(cin, name);

	cout << "Please enter your KSU ID: ";
	getline(cin, ksuIDentry);
	ksuID = stol(ksuIDentry);

	do {
		cout << "Are you male(M) or female?(F). Enter M or F: ";
		cin >> genderChoice;
		switch (genderChoice) {
		case 'm':
		case 'M':
			gender = "Male";
			break;
		case 'f':
		case 'F':
			gender = "Female";
			break;
		default:
			cout << "That is not a valid choice!" << endl;
		}
	} while (gender == "none");

	getline(cin, race); // clear the buffer from using cin
	cout << "Please enter your race: ";
	getline(cin, race);
	
	do {

		cout << "Are you a student(S) or faculty member(F)? Enter S or F: ";
		cin >> patientTypeChoice;
		switch (patientTypeChoice) {
		case 's':
		case 'S':
			patientType = "Student";
			break;
		case 'f':
		case 'F':
			patientType = "Faculty";
			break;
		default:
			cout << "That is not a valid choice!" << endl;
		}
	} while (patientType == "none");

	getline(cin, dobEntry); // clear the buffer from using cin
	cout << "What is your date of birth? Please enter in the following format mm-dd-yyyy: ";
	dob = getDatefromCLI();

	Patient user(name, gender, race, patientType, ksuID, dob);
	
	char choice;
	vector<Invoice> userInvoices;
	bool exitflag = false;
	do {
		system("cls");
		cout << "Welcome to the patient portal.\nPlease choose one of the following options: " << endl;
		cout << "1.\tBook a new appointment" << endl;
		cout << "2.\tCancel an existing appointment" << endl;
		cout << "3.\tView account balance" << endl;
		cout << "0.\tQuit" << endl;
		cout << endl << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case '1':
			{
				int appt = appointmentMenu(fullSchedule, 'b');
				fullSchedule.back().getAppointments().at(appt).setPatient(user);
			}
			break;
		case '2':
			appointmentMenu(fullSchedule, 'c');
			break;
		case '3':
			userInvoices = getInvoice(billing, user);
			{
				int bal = 0;
				for (vector<Invoice>::iterator itr = userInvoices.begin(); itr != userInvoices.end(); ++itr) {
					if (!(itr->isPaid())) {
						bal += itr->getCost();
					}
				}
				cout << "Your current balance is $" << bal << endl;
				system("pause");
			}
			break;
		case '0':
			exitflag = true;
			break;
		default:
			cout << "That is not a valid choice!" << endl;
			system("PAUSE");
			break;
		}
	} while (!exitflag);
	return;
}

void personnelMenu(vector<Schedule> &fullSchedule, vector<Invoice> &billing, vector<Visit> &visits){
	string name;
	string type;
	long employeeID;
	string employeeIDentry;
	vector<AppointmentSlot> workingTimes;

	getline(cin, name); // clear the buffer from using cin
	cout << "Please enter your name: ";
	getline(cin, name);

	cout << "Are you medical staff or a counselor? ";
	getline(cin, type);

	cout << "Enter your employee ID: ";
	getline(cin, employeeIDentry);
	employeeID = stol(employeeIDentry);

	Personnel user(name, type, employeeID, workingTimes);

	char choice;
	bool exitflag = false;
	do {
		system("cls");
		cout << "Welcome to the KSU-HD Personnel portal.\nPlease choose one of the following options: " << endl;
		cout << "1.\tBook a new appointment" << endl;
		cout << "2.\tCancel an existing appointment" << endl;
		cout << "3.\tRecord a visit" << endl;
		cout << "4.\tView Previous Visit" << endl;
		cout << "5.\tView a schedule" << endl;
		cout << "6.\tView Invoices" << endl;
		cout << "0.\tQuit" << endl;
		cout << endl << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case '1':
			{
				int appt = appointmentMenu(fullSchedule, 'b');
				fullSchedule.back().getAppointments().at(appt).setPersonnel(user);
				Patient temp;
				string strTemp;
				cout << "Enter the patient's name: ";
				getline(cin, strTemp); //buffer from cin
				getline(cin, strTemp);
				temp.setName(strTemp);
				fullSchedule.back().getAppointments().at(appt).setPatient(temp);
			}
			break;
		case '2':
			appointmentMenu(fullSchedule, 'c');
			break;
		case '3':
			visitMenu(fullSchedule, visits, 'r');
			break;
		case '4':
			visitMenu(fullSchedule, visits, 'v');
			break;
		case '5':
			printSchedule(fullSchedule);
			break;
		case '6':
			billingMenu(billing);
			break;
		case '0':
			exitflag = true;
			break;
		default:
			cout << "That is not a valid choice!" << endl;
			system("PAUSE");
			break;
		}
	} while (!exitflag);
	return;
}

int appointmentMenu(vector<Schedule> &fullSchedule, char type)
{
	Date dTemp;
	Schedule sTemp;
	string strTemp;
	int loc = -1;
	switch (type) {
	case 'b':
	{
		cout << "Enter the date to book an appointment for.  Please enter in the following format mm-dd-yyyy: ";
		getline(cin, strTemp);
		dTemp = getDatefromCLI();
		for (vector<Schedule>::iterator itr = fullSchedule.begin(); itr != fullSchedule.end(); ++itr) {
			if (itr->getDate() == dTemp) {
				sTemp = *itr;
				loc = distance(fullSchedule.begin(), itr);
				break;
			}
		}
		system("cls");
		string type = "none";
		char cTemp;

		do {
			cout << "Would you like a medical(M) visit or a counseling(C) visit? Enter your choice: ";
			cin >> cTemp;
			switch (cTemp) {
			case 'm':
			case 'M':
				type = "Medical";
				break;
			case 'c':
			case 'C':
				type = "Counseling";
				break;
			default:
				cout << "Invalid entry";
				break;
			}
		} while (type == "none");
		vector<AppointmentSlot> slots = sTemp.getAvailableSlots();
		for (vector<AppointmentSlot>::iterator itr = slots.begin(); itr != slots.end(); ++itr) {
			cout << distance(slots.begin(), itr)+1 << ".\t" << itr->getStartTime().hour << ":" << setw(2) << setfill('0') << internal << itr->getStartTime().minute
				<< " to " << itr->getEndTime().hour << ":" << setw(2) << setfill('0') << internal << itr->getEndTime().minute << endl;
		}
		int choice;
		cout << "Choose an available slot: ";
		cin >> choice;
		AppointmentSlot slot = slots.at(choice);
		Appointment newAppointment;
		newAppointment.setDateTime(slot);
		newAppointment.setType(type);
		Personnel temp;
		temp.setName("Temp Personnel");
		newAppointment.setPersonnel(temp);
		sTemp.addAppointment(newAppointment);
		cout << "Your appointment has been booked." << endl;
		system("pause");
		if (loc != -1) {
			fullSchedule.at(loc) = sTemp;
		}
		else {
			sTemp.setDate(dTemp);
			fullSchedule.push_back(sTemp);
			loc = fullSchedule.size() - 1;
		}
		return loc;
	};
		break;
	case 'c':
		{
			/* cout << "Enter the date of your appointment.  Please enter in the following format mm-dd-yyyy: ";
			getline(cin, strTemp);
			dTemp = getDatefromCLI();
			for (vector<Schedule>::iterator itr = fullSchedule.begin(); itr != fullSchedule.end(); ++itr) {
				if (itr->getDate() == dTemp) {
					sTemp = *itr;
					break;
				}
			}
			if (!(sTemp.getDate() == dTemp)) {
				cout << "There are no appointments for this date" << endl;
				return;
			} */
		}
		cout << "Not yet implemented" << endl;
		system("pause");
		break;
	}
}


void visitMenu(vector<Schedule> &fullSchedule, vector<Visit> &visits, char type)
{
	cout << "Not yet implemented" << endl;
	system("pause");
}

void billingMenu(vector<Invoice> &billing)
{
	cout << "Not yet implemented" << endl;
	system("pause");
}

void printSchedule(vector<Schedule>& fullSchedule)
{
	Date dTemp;
	Schedule sTemp;
	string strTemp;
	int loc = -1;
	cout << "Enter the date to print.  Please enter in the following format mm-dd-yyyy: ";
	getline(cin, strTemp);
	dTemp = getDatefromCLI();
	for (vector<Schedule>::iterator itr = fullSchedule.begin(); itr != fullSchedule.end(); ++itr) {
		if (itr->getDate() == dTemp) {
			sTemp = *itr;
			loc = distance(fullSchedule.begin(), itr);
			break;
		}
	}
	if (loc != -1) {
		system("cls");
		char cTemp;
		vector<Appointment> slots = sTemp.getAppointments();
		for (vector<Appointment>::iterator itr = slots.begin(); itr != slots.end(); ++itr) {
			cout << distance(slots.begin(), itr) + 1 << ".\t" << itr->getDateTime().getStartTime().hour << ":" << setw(2) << setfill('0') << internal << itr->getDateTime().getStartTime().minute
				<< " to " << itr->getDateTime().getEndTime().hour << ":" << setw(2) << setfill('0') << internal << itr->getDateTime().getEndTime().minute << " with " << itr->getPersonnel().getName()
				<< " for " << itr->getPatient().getName() << endl;
		}
	}
	else {
		cout << "There are no appointments for this day" << endl;
	}
	system("pause");
}

vector<Invoice> getInvoice(vector<Invoice> billing, Patient patient)
{
	vector<Invoice> patientInvoices;
	for (vector<Invoice>::iterator itr = billing.begin(); itr != billing.end(); ++itr) {
		if (itr->getVisit().getPatient() == patient) {
			patientInvoices.push_back(*itr);
		}
	}
	return patientInvoices;
}

Date getDatefromCLI()
{
	Date toreturn;
	int month, day, year;
	string dateEntry;
	getline(cin, dateEntry);
	month = stoi(dateEntry.substr(0, 2));
	day = stoi(dateEntry.substr(3, 5));
	year = stoi(dateEntry.substr(6, 10));
	toreturn.month = month;
	toreturn.day = day;
	toreturn.year = year;
	return toreturn;
}
