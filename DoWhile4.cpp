#include<iostream>
using namespace std;
int main()
{
	cout << "Four Function Calculator";
	char choice;
	do
	{
		int n1, n2, result = 0;
		char op;
		cout << "\nEnter First Number: ";
		cin >> n1;
		cout << "Enter Operator: ";
		cin >> op;
		cout << "Enter Second Number: ";
		cin >> n2;
		switch (op)
		{
		case('+'):
			result = n1 + n2;
			cout << "\nAnswer: " << result;
			break;
		case('-'):
			result = n1 - n2;
			cout << "\nAnswer: " << result;
			break;
		case('*'):
			result = n1 * n2;
			cout << "\nAnswer: " << result;
			break;
		case('/'):
			result = n1 / n2;
			cout << "\nAnswer: " << result;
			break;
		}
		cout << "\nDo Another? (y/n): ";
		cin >> choice;
	} while (choice == 'y');
	return 0;
}