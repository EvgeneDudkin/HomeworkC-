#include <iostream>
using namespace std;

int main()
{
	double x = 0;
	cin >> x;
	auto p = (int*)&x;
	for (int i = 0; i < 2; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;

	return 0;
}