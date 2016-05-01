#include <iostream>
using namespace std;

int main()
{
	double d[100];
	int i = 0;
	cout << "Enter i from 0 to 99" << endl;
	cin >> i;
	int k = i/8;
	int t = i % 8;
	if (t == 0)
	{
		k--;
		t = 8;
	}
	auto p = (char*)&d[k];
	cout << (int) p[t-1] << endl;
	return 0;
}