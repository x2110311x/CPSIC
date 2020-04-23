/**
* Invoice.cpp
*
* Declaration of Invoice
*/


#include "Invoice.h"

Invoice::Invoice() {
	paid = 0;
	amountPaid = 0;
}

Invoice::Invoice(Visit v, int c, DateTime d, bool p) {
	visit = v;
	cost = c;
	dateCreated = d;
	paid = p;
}


Invoice::~Invoice() {

}

/**
* Get the Visit object
*/
Visit Invoice::getVisit() {
	return visit;
}

/**
* Get the Cost object
*/
int Invoice::getCost() {
	return cost;
}

/**
* Get the Date Created object
*/
DateTime Invoice::getDateCreated() {
	return dateCreated;
}

/**
* Get the is Paid object
*/
bool Invoice::isPaid() {
	return paid;
}

/**
* Set the Visit object
*/
void Invoice::setVisit(Visit v) {
	visit = v;
	return;
}

/**
* Set the Cost object
*/
void Invoice::setCost(int c) {
	cost = c;
	return;
}

/**
* Set the Date Created object
*/
void Invoice::setDateCreated(DateTime d) {
	dateCreated = d;
	return;
}

/**
* Set the Pay object
*/
void Invoice::pay(int pay) {
	amountPaid = pay;
	if (amountPaid == cost)
		paid = true;
	return;
}
