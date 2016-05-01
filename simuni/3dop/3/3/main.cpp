#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	int n = 0;
	cout << " Enter n" << endl;
	cin >> n;
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	int  k = 0;
	vector<int> v1;
	int count = 1;
	for (int  i = k; i < v.size(); i++)
	{
		if (i != v.size() - 1)
		{
			if (v[i] == v[i+1])
			{
				count++;
			}
			else
			{
				v1.push_back(count);
				count = 1;
				k = i + 1;
			}
			}
			else
			{
				v1.push_back(count);
			}
	}
	cout << endl;

	int min = v1[0];
	for (int i = 0; i < v1.size(); i++)
	{
		if (v1[i] < min)
		{
			min = v1[i];
		}
	}

	bool flag = true;
	for(int i = 0; i < v1.size(); i++)
	{
		if (v1[i] % min != 0)
		{
			flag = false;
		}
	}

	if (flag && min != 1)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	return 0;
}