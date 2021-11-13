#include <iostream>

using namespace std;

int main()
{
	int printCount;
	cin >> printCount;

	for (int i = 0; i < printCount; i++)
	{
		for (int j = i; j < printCount - 1; j++)
		{
			cout << " ";
		}

		for (int k = 0; k < i + 1; k++)
		{
			cout << "*";
		}
		
		cout << endl;
	}
}