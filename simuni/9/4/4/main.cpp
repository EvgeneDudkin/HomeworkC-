#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <typename T>
void print(vector<T> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

template <typename T>
void print1(vector<T> v)
{
	for (auto p = v.begin(); p != v.end();)
	{
		cout << *p << " ";
	    p++;
	}
	cout << endl;
}

template <typename T>
void print1(list<T> l)
{
	for (auto x:l)
	{
		cout << x << " ";
	}
	cout << endl;
}

template <typename T>
void print(list<T> l)
{
	for (auto p = l.begin(); p != l.end(); p++)
	{
		cout << *p << " ";
	}
	cout << endl;
}
int main()
{
	vector<double> v;
	v.push_back(3.42);
	v.push_back(1.75);
	v.push_back(67);
	print(v);
	print1(v);
	list<int> l;
	l.push_back(13);
	l.push_back(45);
	l.push_back(134);
	print1(l);
	print(l);
	return 0;
}