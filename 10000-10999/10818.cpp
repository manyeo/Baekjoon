#include <iostream>

using namespace std;

int main()
{
	int testCase;
	int value;
	int minValue = 0, maxValue = 0;

	cin >> testCase;

	for (int i = 0; i < testCase; i++)
	{
		cin >> value;

		if (i == 0)
		{
			minValue = value;
			maxValue = value;
			continue;
		}

		if (value < minValue)
		{
			minValue = value;
		}
		if (value > maxValue)
		{
			maxValue = value;
		}
	}

	cout << minValue << " " << maxValue << endl;
}