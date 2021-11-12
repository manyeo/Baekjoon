#include <iostream>


using namespace std;

void ExploreWord(string, int*);

int main()
{
	string word;
	int arr[26] = { 0, };
	int highNumber = 0;
	int index = 0;
	char indexToChar;
	bool isSame = false;

	cin >> word;

	for (int i = 0; i < word.length(); i++)
	{
		word[i] = tolower(word[i]);
	}

	ExploreWord(word, arr);

	// 이 중에 제일 높은 값을 추출
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (highNumber != 0 && highNumber == arr[i])
			isSame = true;

		if (highNumber < arr[i])
		{
			highNumber = arr[i];
			index = i;
			if (isSame) isSame = false;
		}

	}

	indexToChar = index + 65;

	if (isSame) cout << "?" << endl;
	else cout << indexToChar << endl;
}

void ExploreWord(string word, int* arr)
{
	for (int i = 0; i < word.length(); i++)
	{
		arr[word[i] - 97]++;
	}
}