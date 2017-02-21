#include "Transactions.h"
#include <iostream>



void Transactions::TransactionsMade(float amount, std::string transactionType)
{
	std::string temp = std::to_string(amount) + " has been " + transactionType;
	history.push_back(temp);
}

void Transactions::ShowTransactions()
{
	for (std::string a : history)
	{
		std::cout<< a << std::endl;
	}
}