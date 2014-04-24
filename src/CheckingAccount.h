/*
 * CheckingAccount.h
 *
 *  Created on: Apr 22, 2014
 *      Author: Student
 */

#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_

#include "Account.h"

class CheckingAccount: public Account {
public:
	CheckingAccount(double, double);
	virtual ~CheckingAccount();
	void credit(double);
	void debit(double);
private:
	double transactionFee;
};

#endif /* CHECKINGACCOUNT_H_ */
