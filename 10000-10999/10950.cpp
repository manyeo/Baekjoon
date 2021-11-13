#include <iostream>

using namespace std;

int main()
{
	int testCase;
	int number1, number2;

	cin >> testCase;

	while(testCase--)
	{
		cin >> number1 >> number2;

		cout << number1 + number2 << endl;
	}
}