/*
 * Account.h
 *
 *  Created on: Apr 22, 2014
 *      Author: Student
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {
public:
	Account(double = 0.0);
	virtual ~Account();
	void credit(double);
	void debit(double);
	double getBalance();
private:
	double balance;
};

#endif /* ACCOUNT_H_ */
