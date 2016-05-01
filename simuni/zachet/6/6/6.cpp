#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <class T>
typename T::value_type maxi(T b, T e)
{
	typename T::value_type  max = 0;
	typename T::value_type temp;
	for (auto p = b; p != e; p++)
	{
		temp = *p;
		p++;
		if (*p - temp > max)
		{
			max = *p - temp;
		}
		if (temp - *p > max)
		{
			max = temp - *p;
		}
	}
	return max;
}

int main()
{
	vector<int> v;
	v.push_back(8);
	v.push_back(4);
	v.push_back(2);
	v.push_back(7);
	cout << maxi(v.begin(),v.end()) << endl;
	list<double> l;
	l.push_back(1.5);
	l.push_back(-15.2);
	l.push_back(0);
	l.push_back(8.9);
	cout << maxi(l.begin(),l.end()) << endl;
	return 0;
}