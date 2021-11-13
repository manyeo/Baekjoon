#include <iostream>

using namespace std;


int ExplorerArr(int*, int);

int main()
{
	int numberArr[8], tempArr[7];

	for (int i = 0; i < 8; i++)
	{
		cin >> numberArr[i];
	}

	for (int i = 0; i < (sizeof(tempArr) / sizeof(int)); i++)
	{
		tempArr[i] = numberArr[i] - numberArr[i + 1];
	}
	
	int result = ExplorerArr(tempArr, sizeof(tempArr) / sizeof(int));

	if (result == 1) cout << "ascending" << endl;
	else if (result == 0) cout << "mixed" << endl;
	else cout << "descending" << endl;
}

int ExplorerArr(int* arr, int arrSize)
{
	// ascending == 1, mixed == 0, descending == -1
	int firstNumber;
	bool isSame = false;

	for (int i = 0; i < arrSize; i++)
	{
		if (i == 0)
		{
			firstNumber = arr[i];
			continue;
		}

		if (firstNumber == arr[i])
		{
			isSame = true;
		}
		else
		{
			isSame = false;
			break;
		}
			
	}

	if (isSame) return -firstNumber;
	else return 0;
}