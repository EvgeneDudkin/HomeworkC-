#include <iostream>
#include <map>
#include <string>
using namespace std;
struct MyStruct
{
	string f;
	string s;
};
int main()
{
	multimap<string,MyStruct> m;
	string name;
	MyStruct inter;
	bool flag  = true;
	while (flag)
	{
		cin >> name >> inter.f >> inter.s;
		for (auto p = m.begin(); p != m.end(); p++)
		{
			MyStruct temp = p->second;
			if (temp.f == inter.f || temp.s == inter.s)
			{
				cout << "Interesi chast. sovpadaut: " << p->first << " " << name << endl;
				flag = false;
			}
		}
		m.insert(make_pair(name,inter));
	}
	return 0;
}