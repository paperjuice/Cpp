#include "stdafx.h"
#include "Transactions.h"
#include "Account.h"

using namespace std;

int main()
{
	bool isRunning = true;
	int answer = 0;
	float amount = 0;
	float balance = 0;
	Account a;
	Transactions t;
	vector<string> list;


	while (isRunning)
	{
		cout << "What transactions do you want to make?\n" <<
			"1-Deposit\n2-Withdraw\n3-History\n4-No actions\n";
		cin >> answer;


		switch (answer)
		{
			case 1:
				cout << "What amount you want to deposit?";
				cin >> amount;
				balance = a.Deposit(amount); 
				break;

			case 2:
				cout << "What amount you want to withdraw?";
				cin >> amount;
				balance = a.Widraw(amount);
				break;

			case 3:
				t.ShowTransactions();
				cout << "Balance is: " + to_string(balance)<<endl<<endl;
				break;

			case 4:
				isRunning = false;
				break;

			default:
				break;
			
			
		}


	}








    return 0;
}

