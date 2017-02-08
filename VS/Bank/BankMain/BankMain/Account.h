#pragma once
#include <iostream>



class Account
{
private:
	int balance;



public:
	Account();
	bool Deposit(int amount);
	bool Withdraw(int amount);
};



