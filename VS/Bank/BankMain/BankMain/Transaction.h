#pragma once
#include <string>
#include <vector>
#include <iostream>



class Transaction
{
private:
	std::vector<std::string> storeTransactions;

public:
	void AddTransactions(int amount, std::string transactionType);
	void ShowTransaction();
};
