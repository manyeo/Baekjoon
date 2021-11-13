#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	char* arr = new char[n + 1]();
	cin >> arr;
	
	int result = 0;
	// ¹®ÀÚ 1ÀÌ ASCII CODE 49

	for (int i = 0; i < n; i++)
	{
		result += ((int)*(arr + i) - 48);
	}

	cout << result << endl;

	delete arr;
}