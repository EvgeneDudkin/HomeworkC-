#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkDigits(vector<int> v, int d)
{
	return all_of(v.begin(),v.end(),[d] (int i) {return i % 10 == d; });
}

int main()
{
	int n = 0;
	int d = 0;
	cout << "Enter N" << endl;
	cin >> n;
	int x = 0;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " " ;
	}
	cout << endl << "Enter d" << endl;
	cin >> d;
	cout << checkDigits(v,d);
	return 0;
}