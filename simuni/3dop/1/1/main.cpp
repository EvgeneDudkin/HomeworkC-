#include <iostream>
using namespace std;
int nok(int a, int b)
{
	for (int i = b; i > 0; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			return i;
		}
	}
}
int main()
{
	int a = 0;
	int b = 0;
	cin >> a;
	cin >> b;
	cout << nok(a,b) << endl;
	return 0;
}