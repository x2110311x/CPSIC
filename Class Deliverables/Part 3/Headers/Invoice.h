/**
* @class Invoice
* 
* @brief this class generates the invoices that are sent out to the patients.
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
#include "Payment.h"

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
		/**
		 * @brief Construct an invoice object
		 */
		Invoice();

		/**
		 * @brief Construct an invoice object
		 * @param visit The viist the invoice is associated with
		 * @param cost The balance on the invoice
		 * @param dateCreated The date and time the invoice was created
		 * @param paid Whether or not it has been paid yet
		 */
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
		* @param visit the visit that corresponds with the invoice
		* @return None
		*/
		void setVisit(Visit visit);

		/** @brief Set the cost of the invoice
		* @param cost the cost of the invoice
		* @return None
		*/
		void setCost(int cost);

		/** @brief Set the date the invoice was created
		* @param dateCreated the date the invoice was created
		* @return None
		*/
		void setDateCreated(DateTime dateCreated);

		/** @brief pay the invoice
		* @param payment the amount paid toward the invoice
		* @return None
		*/
		void pay(Payment& payment);
};
#endif