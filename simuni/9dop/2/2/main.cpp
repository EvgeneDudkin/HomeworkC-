#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	multimap<string,string> m;
	string name;
	string inter;
	bool flag  = true;
	while (flag)
	{
		cin >> name;
		getline(cin,inter);
		for (auto p = m.begin(); p != m.end(); p++)
		{
			if (p->second == inter)
			{
				cout << "Interesi sovpadaut: " << p->first << " " << name << endl;
				flag = false;
			}
		}
		m.insert(make_pair(name,inter));
	}
	return 0;
}