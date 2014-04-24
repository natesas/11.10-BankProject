//============================================================================
// Name        : BankProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "CheckingAccount.h"
#include "SavingsAccount.h"
using namespace std;

int main() {
	SavingsAccount a(5.1, 0.02);
	cout << "Interest: " << a.calculateInterest() << endl; // should be 0.102
	CheckingAccount b(5.0, 0.5);
	b.credit(5.0);
	b.debit(1.0);
	cout << "Balance of b: " << b.getBalance() << endl; // should be 8.0
	return 0;
}
