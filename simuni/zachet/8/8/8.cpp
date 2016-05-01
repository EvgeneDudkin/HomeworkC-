#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	for (auto p = l.begin(); p != l.end(); p++)
	{
		cout << *p << " ";
	}
	for (auto p = l.begin(); p != l.end(); p++)
	{
		if (*p % 2 == 0)
		{
			l.insert(p,*p);
		}
	}
	cout << endl;
	for (auto p = l.begin(); p != l.end(); p++)
	{
		cout << *p << " ";
	}
	cout << endl;
	return 0;
}