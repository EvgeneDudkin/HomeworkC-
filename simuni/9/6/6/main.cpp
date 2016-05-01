#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> v;
	bool b = true;
	int x = 0;
	while (b)
	{
		cin >> x;
		if (any_of(v.begin(),v.end(),[x] (int i) {return i == x;}))
		{
			b = false;
		}
		v.push_back(x);
	}
	cout << x;
	return 0;
}