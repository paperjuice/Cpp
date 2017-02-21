#include "stdafx.h"
#include "Account.h"
#include "Transaction.h"

using namespace std;

int main()
{
	int answer = 0;
	Account a;
	Transaction t;

	while (answer += 4)
	{

		t.AddTransactions(100, "annananana");
		t.ShowTransaction();


		cout << "Would you like a transaction? 1 - WITHDRAW, 2 - DEPOSIT, 3 - SHOW DEPOSIT, 4 - NO TRANSACTIONS FOR MEH"<<endl;
		cin >> answer;


		switch (answer)
		{
			case 1:
				cout << "What is the amount you want to WITHDRAW?"<<endl;
				cin >> answer;
				a.Withdraw(answer);
				break;

			case 2: 
				cout << "What is the amount you want to DEPOSIT?" << endl;
				cin >> answer;
				a.Deposit(answer);
				break;

			case 3:
				t.ShowTransaction();
				break;
		}
	}


	return 0;
}

