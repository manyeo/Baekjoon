#include <iostream>

using namespace std;

int main()
{
	int subjectCount;
	cin >> subjectCount;


	int score;
	int maxValue = 0;
	double result = 0.0;

	for (int i = 0; i < subjectCount; i++)
	{
		cin >> score;

		if (maxValue < score)
			maxValue = score;

		result += score;
	}

	double average = (result / maxValue * 100) / subjectCount;

	cout.precision(8);
	cout << average << endl;

}