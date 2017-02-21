#include "stdafx.h"
#include <algorithm> 
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	vector<int> vi;


	for (int a = 0; a < 10; a++)
		vi.push_back(a);

	for (int item : vi)
		cout << item <<" ";

	vector<string> vs;

	for (int i = 0; i < 3; i++)
	{
		string s;
		cin >> s;
		vs.push_back(s);
	}
	
	sort(begin(vs), end(vs));
	for  (auto item : vs)
	{
		cout << item<<" ";
	}


    return 0;
}

