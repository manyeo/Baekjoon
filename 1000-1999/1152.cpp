#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> split(string, char);

int main()
{
	string sentense;
	int count = 0;

	getline(cin, sentense, '\n');
	
	vector<string> result = split(sentense, ' ');

	for (int i = 0; i < result.size(); i++)
	{
		if (result[i] == "") continue;
		count++;
	}

	cout << count << endl;
}

vector<string> split(string input, char delimiter)
{
	vector<string> answer;
	stringstream ss(input);
	string temp;

	while (getline(ss, temp, delimiter))
	{
		answer.push_back(temp);
	}

	return answer;
}