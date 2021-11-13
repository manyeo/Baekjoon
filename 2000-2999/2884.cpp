#include <iostream>

using namespace std;

int main()
{
	int hour, min;
	cin >> hour >> min;

	for (int i = 1; i <= 45; i++)
	{
		min--;

		if (min < 0)
		{
			hour--;
			min = 59;
		}
		else if (min > 59)
		{
			hour++;
			min = 0;
		}

		if (hour < 0) hour = 23;
		else if (hour > 24) hour = 0;
	}

	cout << hour << " " << min << endl;
}