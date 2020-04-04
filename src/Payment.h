/**
* @class Payment
*
* @brief This class keeps track of the payments made
*
* @author Scott Caldwell
*
* @version 1.0
*
* Created on Sun Mar 29 2020
*/

#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
#include "datetime.h"
#include "Invoice.h"

using namespace std;

class Payment {
private:
	//Attributes
	DateTime dateReceived;	///< The date when the payment is made
	string type;	///< the type of payment made
	int amount;		///< the amount of the payment
	Invoice invoice;	///< the invoice that the payment corresponds with
public:
	//Constructors
	/**
 	 * @brief Construct an payment object
     */
	Payment();
    /**
     * @brief Construct an payment object
	 * @param dateReceived The date the payment was received
	 * @param type The type of payment - Credit Card, cash, ceheck
	 * @param amount The amount of the payment
	 * @param invoice The invoice the payment is associated with
	 */
	Payment(DateTime dateReceived, string type, int amount, Invoice invoice);
	
	//Destructors
	~Payment();
	
	//accessors

	/** @brief Retrieve the type of payment
	* @return String the type of payment made
	*/
	string getType();

	/** @brief Retrieve the amount of the payment
	* @return Int the amount of the payment
	*/
	int getAmount();

	/** @brief Retrieve the date the payment was received
	* @return DateTime the date the payment was received
	*/
	DateTime getDateReceived();

	/** @brief Retrieve the invoice that corresponds with the payment
	* @return Invoice that corresponds with the payment
	*/
	Invoice getInvoice();
};

#endif