#include <iostream>
#include <map>
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

int main()
{
	multimap<int,int> m;
	int x = -1;
	while (x != 0)
	{
		cin >> x;
		m.insert(make_pair(sum(x),x));
	}
	for (auto p = m.begin(); p != m.end(); p++)
	{
		cout << p->second << " ";
	}
	return 0;
}
