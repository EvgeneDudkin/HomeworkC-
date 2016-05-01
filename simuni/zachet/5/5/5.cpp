#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main()
{
	map<int,pair<int,int>> m;
	int n = 0;
	int x = 0;
	int y = 0;
	bool flag = false;
	cin >> n;
	int k = n;
	while (n > 0)
	{
		cin >> x >> y;
		m[n] = make_pair(x,y);
		n--;
	}
	auto q = m.begin();
	auto temp = m.begin();
	for (int i = 0; i < k; i++)
	{
		temp++;
		for (auto p = temp; p != m.end(); p++)
		{
			pair<int,int> P = p->second;
			pair<int,int> Q = q->second;
			if (P.first == Q.first || P.second == Q.first || P.first == Q.second || P.second == Q.second)
			{
				flag = true;
				cout << P.first << " " << P.second << "   " << Q.first << " " << Q.second << endl;
			}
		}
		q++;
	}
	if (!flag)
	{
		cout << "NET " << endl;
	}
	return 0;
}