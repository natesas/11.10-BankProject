/*
 * CheckingAccount.cpp
 *
 *  Created on: Apr 22, 2014
 *      Author: Student
 */

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double bal, double fee) : Account(bal), transactionFee(fee) {

}

CheckingAccount::~CheckingAccount() {
}

void CheckingAccount::credit(double amt) {
	Account::credit(amt - transactionFee);
}

void CheckingAccount::debit(double amt) {
	if (getBalance() >= (amt + transactionFee) && amt > 0) {
		Account::debit(amt + transactionFee);
	}
}
