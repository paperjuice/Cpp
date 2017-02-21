#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;




void GuessMyNumber()
{
	bool isNumberGuessed = false;
	int randomNumber;
	int input = 0;
	int numberOfTries = 0;

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

void GoAgain()
{
	bool isActive = true;
	int answer = 1;

	do
	{
		GuessMyNumber();
		cout << "Wanna play again? Type 0 if NO \n";
		cin >> answer;

		if (answer == 0)
			isActive = false;

	} while (isActive);
}

