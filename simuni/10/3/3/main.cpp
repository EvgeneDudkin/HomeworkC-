#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void mySort(vector<int> &v, int n)
{
	sort(v.begin(),v.end(), [n](int i, int j) {int a = pow(10,n);return i % a < j % a;});
}

int main()
{
	vector<int> v;
	int n = 0;
	int x = 0;
	cout << " Enter N" << endl;
	cin >> n;
	while (n > 0)
	{
		cin >> x;
		v.push_back(x);
		n--;
	}
	for (auto x:v)
	{
		cout << x << " ";
	}
	cout << endl;
	int k = 0;
	cout << "Enter n" << endl;
	cin >> k;
	mySort(v,k);
	for (auto x:v)
	{
		cout << x << " ";
	}
	return 0;
}