#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int minDistance = x;
	
	if (abs(x - w) < minDistance)
		minDistance = abs(x - w);
	if (y < minDistance)
		minDistance = y;
	if (abs(y - h) < minDistance)
		minDistance = abs(y - h);

	cout << minDistance;
}