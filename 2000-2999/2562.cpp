#include <iostream>

using namespace std;

int main()
{
	int number, index;
	int maxValue = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> number;

		if (maxValue < number)
		{
			maxValue = number;
			index = i;
		}
	}

	cout << maxValue << endl;
	cout << index + 1 << endl;
}