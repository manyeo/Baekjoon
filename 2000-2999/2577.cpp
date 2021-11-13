#include <iostream>

using namespace std;

int main()
{
	int number;
	int result = 1;
	int arr[10] = { 0, };

	for (int i = 0; i < 3; i++)
	{
		cin >> number;

		result *= number;
	}

	while (result != 0)
	{
		arr[result % 10]++;

		result /= 10;
	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] << endl;
	}
}