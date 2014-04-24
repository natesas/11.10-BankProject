/*
 * SavingsAccount.cpp
 *
 *  Created on: Apr 23, 2014
 *      Author: Student
 */

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double bal, double interest) :
		Account::Account(bal), interestRate(interest) {
}

SavingsAccount::~SavingsAccount() {
}

double SavingsAccount::calculateInterest() {
	return getBalance() * interestRate;
}
