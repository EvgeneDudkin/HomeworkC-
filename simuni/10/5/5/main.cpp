#include <iostream>
#include <vector>
using namespace std;

template <typename T>
typename T::value_type func(T b, T e)
{
	typename T::value_type sum = 0;
	int count = 0;
	for (T p = b; p != e; p++)
	{
		if (*p > 0)
		{
			sum += *p;
			count++;
		}
	}
	return sum/count;
}

template <typename T>
auto func1(T b, T e)->decltype(*b+0)
{
	decltype(*b+0) sum = 0;
	int count = 0;
	for (T p = b; p != e; p++)
	{
		if (*p > 0)
		{
			sum += *p;
			count++;
		}
	}
	return sum/count;
}
int main()
{
	vector<double> v;
	v.push_back(3.8);
	v.push_back(-3.1);
	v.push_back(1.4);
	cout << func(v.begin(),v.end()) <<  endl;
	cout << func1(v.begin(),v.end()) <<  endl;
	return 0;
}