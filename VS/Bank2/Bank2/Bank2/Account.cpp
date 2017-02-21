#include "Account.h"
#include "Transactions.h"

using namespace std;


Transactions _t;

float Account::Deposit(float amount)
{
	if (amount > 0)
	{
		cout << "Deposit successful!"<<endl;
		_t.TransactionsMade(amount, "Deposit");
		balance += amount;
	}

	return balance;
}

float Account::Widraw(float amount)
{
	Transactions _t;
	if (amount <= balance)
	{
		cout << "Widraw successfull!" << endl;
		_t.TransactionsMade(amount, "Withdraw");
		balance -= amount;
	}
	else
	{
		cout << "No enough money :("<<endl;
	}


	return balance;
}