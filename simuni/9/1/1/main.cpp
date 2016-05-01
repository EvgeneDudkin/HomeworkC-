#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
	map<string,int> m;
	int n = 0;
	string s;
	int k = 0;
	bool flag = true;
	cout << "ENter N " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		cin >> k;
		if ( m.size() != 0)
		{
			for (auto it = m.begin(); it != m.end(); it++)
			{
				if (s == it->first)
				{
					if (k > it->second)
					{
						m[s] = k;
					}
					flag = false;
				}
			}
			if (flag)
			{
				m[s] = k;
			}
		}
		else
		{
			m[s] = k;
		}
		flag = true;
	}
	for (auto& p:m)
	{
		cout << p.first << " " << p.second <<  " ; ";
	}
	cout << endl;
	return 0;
}