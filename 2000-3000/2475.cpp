#include <iostream>

using namespace std;

int main()
{
	int number;
	int result = 0;
	
	for (int i = 0; i < 5; i++)
	{
		cin >> number;

		result += number * number;
	}

	cout << result % 10 << endl;
}