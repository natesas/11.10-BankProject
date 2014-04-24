/*
 * SavingsAccount.h
 *
 *  Created on: Apr 23, 2014
 *      Author: Student
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

#include "Account.h"

class SavingsAccount: public Account {
public:
	SavingsAccount(double, double);
	virtual ~SavingsAccount();
	double calculateInterest();
private:
	double interestRate;
};

#endif /* SAVINGSACCOUNT_H_ */
