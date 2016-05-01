#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	multimap<string,string> m;
	string name;
	string book;
	bool flag  = true;
	while (flag)
	{
		cin >> name >> book;
		for (auto p = m.begin(); p != m.end(); p++)
		{
			if (p->second == book)
			{
				cout << "Interesi sovpadaut: " << p->first << " " << name << endl;
				flag = false;
			}
		}
		m.insert(make_pair(name,book));
	}
	return 0;
}