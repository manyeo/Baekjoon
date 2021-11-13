#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	int arr[26];

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		arr[i] = -1;
	}

	cin >> word;

	for (int i = 0; i < word.length(); i++)
	{
		if (arr[word[i] - 97] == -1)
		{
			arr[word[i] - 97] = i;
		}
	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] << " ";
	}
}