#include <iostream>
#include <list>
using namespace std;

void printList(list<int> l)
{
	for (auto x:l)
	{
		cout << x << " ";
	}
	cout << endl;
}


list<int> myFunc(list<int> l1, list<int> l2)
{
	list<int> res;
	int temp = 0;
	for (auto x:l1)
	{
		for (auto y:l2)
		{
			if (x != y)
			{
				temp++;
			}
		}
		if (temp == l2.size())
		{
			res.push_back(x);
		}
		temp = 0;
	}
	return res;
}

bool eq(list<int> l1, list<int> l2)
{
	if (l1.size() != l2.size())
	{
		return 0;
	}
	else
	{
		int temp = 0;
		auto k = l2.begin();
		auto p = l1.begin();
		while ( k!=l2.end() && p!= l1.end() && *k == *p)
		{
			k++;
			p++;
			temp++;
		}
		return (temp == l1.size());
	}
}

list<int> myFunc1(list<int> l1, list<int> l2)
{
	list<int> res;
	int temp = 0;
	int f = 0;
	auto i = l2.begin();
	for (auto p = l1.begin() ;p != l1.end(); p++)
	{
		for (auto k = i; k != l2.end(); k++)
		{
			if ( *p != *k)
			{
				temp++;
			}
		}
		if (temp == l2.size()-f)
		{
			res.push_back(*p);
		}
		else
		{
			i++;
			f++;
		}
		temp = 0;
	}
	return res;
}

bool tripleList(list<int> l1, list<int> l2, list<int> l3)
{
	list<int> res;
	res = myFunc1(l1,l2);
	return eq(res,l3);
}

int main()
{
	list<int> l1;
	list<int> l2;
	int n = 0;
	int x = 0;
	cout << "Enter nomber of 1 list " << endl;
	cin >> n;
	while (n != 0)
	{
		cin >> x;
		l1.push_back(x);
		n--;
	}
	cout << "Enter nomber of 2 list " << endl;
	cin >> n;
	while (n != 0)
	{
		cin >> x;
		l2.push_back(x);
		n--;
	}
	cout << endl;
	printList(l1);
	printList(l2);
	list<int> res = myFunc(l1,l2);
	printList(res);

	//3
	list<int> l3;
	cout << "Enter nomber of 3 list " << endl;
	cin >> n;
	while (n != 0)
	{
		cin >> x;
		l3.push_back(x);
		n--;
	}
	cout << endl;
	cout << tripleList(l1,l2,l3);
	return 0;
}