#include <iostream>

using namespace std;

int main()
{
	int printCount;
	cin >> printCount;

	for (int i = 0; i < printCount; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}

		cout << endl;
	}
}