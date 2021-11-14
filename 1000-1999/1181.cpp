#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string, string);

int main()
{
	int testCase;
	cin >> testCase;

	string temp;
	vector<string> strArr;

	for (int i = 0; i < testCase; ++i)
	{
		cin >> temp;

		strArr.push_back(temp);
	}

	sort(strArr.begin(), strArr.end(), compare);

 	for (int i = 0; i < strArr.size(); ++i)
	{
		if (i == 0)
		{
			cout << strArr[i] << endl;
			continue;
		}

		if ( strArr[i - 1] != strArr[i] )
			cout << strArr[i] << endl;
	}
}

bool compare(string a, string b)
{
	if (a.length() == b.length())
	{
		for (int i = 0; i < a.length(); ++i)
		{
			if (a[i] != b[i])
				return a[i] < b[i];
		}
	}

	return a.length() < b.length();
}