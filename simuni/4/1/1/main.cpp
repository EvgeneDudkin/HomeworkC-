#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	int x = 1;
	while (x != 0)
	{
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	double temp = 0;
	for (int i = 0; i < v.size(); i++)
	{
		temp += v[i];
	}
	temp /= v.size();
	cout << temp << endl;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > temp)
		{
			cout << v[i] << " ";
		}
	}
	return 0;
}