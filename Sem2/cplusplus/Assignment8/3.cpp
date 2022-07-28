// Assignment 8
// Question 3
// 2021pgcaca050

#include <iostream>

using namespace std;

void subString(string str)
{
	try
	{
		if (str == "")
			throw(str);
	}
	catch (string s)
	{
		cout << "Cannot enter empty string" << endl;
	}

	for (int i = 0; i < str.size(); i++)
	{

		for (int j = i; j < str.size(); j++)
		{

			for (int k = i; k <= j; k++)
				cout << str[k] << " ";
			cout << endl;
		}
	}
}

int main()
{

	string str = "";
	cout << "Do you want to enter string y/n: ";
	char choice;
	cin >> choice;
	switch (choice)
	{
	case 'y':
		cout << "Enter string:";
		cin >> str;
		subString(str);
		break;

	case 'n':
		subString(str);
		break;

	default:
		cout << "Invalid input!";
	}

	return 0;
}
