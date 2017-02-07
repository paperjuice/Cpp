#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void SayHello()
{
	string greeting = "Hello, ";
	string name;
	cout << "What is your name?\n";
	cin >> name;

	greeting += name;
	if (name == "bob")
	{
		cout << greeting<<" mai adaug aici ceva\n";
	}
	else {
		cout <<greeting<< "That is dissapointing!\n";

	}

	size_t pos = greeting.find(' ');
	string nameExtracted = greeting.substr(pos + 1,  name.length()+3 );

	cout << nameExtracted;
}


void CompareStringLength()
{
	string string1 = "";
	string string2 = "";


	cout << "Please enter a string of characters:\n";
	getline(cin, string1);

	cout << "Please enter a second string:\n";
	getline(cin, string2);

	if (string1.length() > string2.length())
		cout << "\"" << string1 << "\" has more characters than " << "\"" << string2 << "\"";
	else if (string1.length() < string2.length())
		cout << "\"" << string1 << "\" has less characters than " << "\"" << string2 << "\"";
	else if (string1.length() == string2.length())
		cout << "Both strings have " << string1.length() << " characters";

}