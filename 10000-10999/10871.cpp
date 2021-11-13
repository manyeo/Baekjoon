#include <iostream>

using namespace std;

int main()
{
	int testCase, number, sequence;

	cin >> testCase >> number;

	while (testCase--)
	{
		cin >> sequence;

		if (number > sequence)
			cout << sequence << " ";
	}
}