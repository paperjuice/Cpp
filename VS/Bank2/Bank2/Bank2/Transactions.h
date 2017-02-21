#include <string>
#include <vector>

class Transactions
{
private:
	std::vector<std::string> history;

public:
	void TransactionsMade(float amount, std::string transactionType);
	void ShowTransactions();
};
