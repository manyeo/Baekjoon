#include <iostream>

using namespace std;



int main()
{
	// 수 10개 입력
	// 42로 나눈 나머지를 구함
	// 서로 다른 값이 몇 개 있는가

	int arr[10];
	int arrSize = sizeof(arr) / sizeof(int);
	int count = 0;

	for (int i = 0; i < arrSize; i++)
	{
		cin >> arr[i];
		arr[i] %= 42;
	}

	// 0~9까지 같은 값이 있는 지 확인
	// 같은 값이면 -1로 바꿈
	for (int i = 0; i < arrSize; i++)
	{
		for (int j = i + 1; j < arrSize; j++)
		{
			if (arr[j] == -1) continue;
			if (arr[i] == arr[j]) arr[j] = -1;
		}
	}

	// 0보다 큰 값이 몇 개인지 확인
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] >= 0) count++;
	}

	cout << count << endl;
}