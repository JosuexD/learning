#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool is4digits(string);
int main()
{
	string PIN;
	cout << "Enter a 4 digit PIN number: ";
	cin >> PIN;

	if (is4digits(PIN) == true)
	{
		cout << "PIN Accepted.";
	}
	else
	{
		cout << "PIN Denied.";
	}
	cout << endl;
	system("pause");
}

bool is4digits(string pin)
{
	bool status = 1;
	if (pin.length() !=4)
	{
		status = 0;
	}
	return status;
}
