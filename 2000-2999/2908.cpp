#include <iostream>

using namespace std;

int ReverseNumber(int);

int main()
{
	int x, y;
	int resultX, resultY, total;
	cin >> x >> y;

	resultX = ReverseNumber(x);
	resultY = ReverseNumber(y);

	total = (resultX > resultY) ? resultX : resultY;
	cout << total << endl;
}

int ReverseNumber(int number)
{
	int result = 0;

	for (int i = 0; i < 3; i++)
	{
		int temp = 1;
		for (int j = 0; j < i; j++) temp *= 10;

		result += (number % 10) * (100 / temp);
		number /= 10;
	}

	return result;
}