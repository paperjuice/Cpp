#include "stdafx.h"
#include <iostream>
#include <stdlib.h>



void CompareNumbers()
{
	using namespace std;

	int i;
	int j;
	bool keepGoing = true;
	int answer;

	while (keepGoing)
	{
		cout << "Insert a number: " << endl;
		cin >> i;

		cout << "Cool! Insert a second number: ";
		cin >> j;


		if (i == j)
			cout << i << " equals " << j << endl;
		else if (i > j)
			cout << i << " is greater than " << j << endl;
		else if (i < j)
			cout << i << " is lower than " << j << endl;

		cout << "Do you want to go again? Type 0 for NO \n";
		cin >> answer;

		if (answer == 0)
			keepGoing = false;
	}
}



void GuessMyNumber()
{
	using namespace std;

	bool isNumberGuessed = false;
	int randomNumber;
	int input = 0;
	int numberOfTries=0;

	randomNumber = rand() % (10 + 1);
	cout << "Guess a number between 1 and 10. Type your number:" << endl;

	while (!isNumberGuessed)
	{
		cin >> input;
		numberOfTries++;

		if (input == randomNumber && numberOfTries == 1)
		{
			cout << "WoW, you got it right in first try!!!";
			isNumberGuessed = true;
		}
		else if (input == randomNumber && numberOfTries > 1)
		{
			cout << "WoW, you got it right in " << numberOfTries << " tries!!";
			isNumberGuessed = true;
		}
		else if (input > randomNumber)
		{
			cout << "Your number is too high! Try lower.";
		}
		else if (input < randomNumber)
		{
			cout << "Your number is too low! Try higher.";
		}
	}
}

int main()
{
	GuessMyNumber();

	return 0;
}



