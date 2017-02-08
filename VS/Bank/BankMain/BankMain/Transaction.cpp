#include "Transaction.h"

using namespace std;


void Transaction::AddTransactions(int amount, string transactionType)
{
	string temp = amount + " has been processed.The action was: " +  transactionType;
	storeTransactions.push_back(temp);
}


void Transaction::ShowTransaction()
{
	for (string item : storeTransactions)
		cout << item << endl;
}

