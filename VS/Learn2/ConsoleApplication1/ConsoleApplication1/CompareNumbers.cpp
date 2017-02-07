#include "stdafx.h"
#include <iostream>
using namespace std;

void CompareNumbers()
{
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
