#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum(int a)
{
	int k = 0;
	while (a > 10)
	{
		k += a % 10;
		a /= 10;
	}
	k += a;
	return k;
}

bool eq(int i, int j)
{
	return sum(i) < sum(j);
}

int main()
{
	int x = -1;
	vector<int> v;
	while (x != 0)
	{
		cin >> x;
		v.push_back(x);
	}
	for (auto q:v)
	{
		cout << q << " ";
	}
	cout << endl;
	sort(v.begin(),v.end(), eq);
	for (auto q:v)
	{
		cout << q << " ";
	}
	return 0;
}