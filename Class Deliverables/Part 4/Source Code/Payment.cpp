/**
* Payment.cpp
*
* Declaration of Payment
*/

#include "Payment.h"

using namespace std;

Payment::Payment() {

}

Payment::Payment(DateTime dR, string t, int a, Invoice i) {
	dateReceived = dR;
	type = t;
	amount = a;
	invoice = i;
}

//Destructors
Payment::~Payment() {

}

//accessors
/**
* Get the Type object
*/
string Payment::getType() {
	return type;
}

/**
* Get the Amount object
*/
int Payment::getAmount() {
	return amount;
}

/**
* Get the Date Received object
*/
DateTime Payment::getDateReceived() {
	return dateReceived;
}

/**
* Get the Invoice object
*/
Invoice Payment::getInvoice() {
	return invoice;
}
