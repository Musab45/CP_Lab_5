#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	do
	{
		cout << i << " ";
		i += i;
	} while (i <= 512);
	return 0;
}