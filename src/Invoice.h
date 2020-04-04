/**
* @class Invoice
* 
* this class generates the invoices that are sent out to the patients.
* it also tracks whether the invoice is paid or not and what time it was created.
* 
* @author Scott Caldwell
* 
* @version 1.0
* 
* Created on Sun Mar 29 2020
*/

#ifndef INVOICE_H
#define INVOICE_H

#include <string>
#include "datetime.h"
#include "Visit.h"

/**
* Shows the compiler that there is another class called payment that is defined elsewhere
*/
class Payment;

using namespace std;

class Invoice {
private:
	//Attributes
	Visit visit;	///< The visit that the invoice refers to
	int cost;	///< The cost of the invoice
	DateTime dateCreated;	///< The time the invoice was created
	bool paid;	///< Whether the invoice is paid or not
public:
	//Constructors
	Invoice();
	Invoice(Visit visit, int cost, DateTime dateCreated, bool paid);
	
	//Destructors
	~Invoice();

	//Accessors

	/** @brief Retrieve the visit that corresponds with the invoice
	* @return Visit that corresponds with the invoice
	*/
	Visit getVisit();

	/** @brief Retrieve the cost of the invoice
	* @return Int the cost of the invoice
	*/
	int getCost();

	/** @brief Retrieve the time the invoice was created
	* @return DateTime the time the invoice was created
	*/
	DateTime getDateCreated();

	/** @brief Retrieve if the invoice is paid
	* @return Bool if the invoice is paid
	*/
	bool isPaid();

	//Modifiers

	/** @brief Set the visit of the invoice
	* @param Visit the visit that corresponds with the invoice
	* @return None
	*/
	void setVisit(Visit visit);

	/** @brief Set the cost of the invoice
	* @param Int the cost of the invoice
	* @return None
	*/
	void setCost(int cost);

	/** @brief Set the date the invoice was created
	* @param DateTime the date the invoice was created
	* @return None
	*/
	void setDateCreated(DateTime dateCreated);

	/** @brief pay the invoice
	* @param Payment the amount paid toward the invoice
	* @return None
	*/
	void pay(Payment& payment);
};
#endif