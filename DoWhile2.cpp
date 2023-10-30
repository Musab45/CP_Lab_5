#include<iostream>
using namespace std;
int main()
{
	int factorial = 1, n, i = 1;
	cout << "Enter a Positive Integer: ";
	cin >> n;
	do
	{
		factorial *= i;
		i++;
	} while (i <= n);
	cout << "\nFactorial of Number is: " << factorial;
}