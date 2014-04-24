/*
 * Account.cpp
 *
 *  Created on: Apr 22, 2014
 *      Author: Student
 */

#include "Account.h"
#include <iostream>

Account::Account(double bal) :
		balance(bal) {
	if (balance < 0.0) {
		balance = 0.0;
	}
}

Account::~Account() {
}

double Account::getBalance() {
	return balance;
}

void Account::credit(double amt) {
	balance += amt;
}

void Account::debit(double amt) {
	if (balance >= amt) {
		balance -= amt;
	} else {
		std::cout << "Debit amount exceeded amount balance." << std::endl;
	}
}
