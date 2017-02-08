#include "Account.h"

using namespace std;




Account::Account()
{
	balance = 0;
}


bool Account::Deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
		cout << "Deposit successful"<<endl;
		return true;
	}
	else {
		return false;
		cout << "You need to deposit a positive amountl" << endl;
	}
}


bool Account::Withdraw(int amount)
{
	if (amount <= balance)
	{
		balance -= amount;
		cout << "Transaction successful" << endl;
		return true;
	}
	else {
		cout << "You don't have enough money, cupcake :(" << endl;
		return false;
	}


}