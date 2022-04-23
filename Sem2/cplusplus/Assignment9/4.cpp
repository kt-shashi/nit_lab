// Assignment 9 Program 3
// Shashi Kant | 2021PGCACA050

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, long long> contact;
	string name;
	int n;
	cout << "Enter total number of entry: ";
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		long long ph;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter phone number: ";
		cin >> ph;

		contact[name] = ph;
	}

	int loopControl = 1;
	while (loopControl)
	{

		int choice;
		cout << "1. Find Contact Details" << endl;
		cout << "2. Exit" << endl;
		cout << "Enter Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter name: ";
			cin >> name;
			if (contact.find(name) != contact.end())
				cout << name << ": " << contact[name] << endl;
			else
				cout << "Contact details is not found in the contact list" << endl;
			break;

		case 2:
			loopControl = 0;
			break;

		default:
			cout << "Invalid input" << endl;
			break;
		}
	}
}