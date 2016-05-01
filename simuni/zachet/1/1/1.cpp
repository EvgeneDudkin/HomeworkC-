#include <iostream>
using namespace std;

bool func(const int a[], int n)
{
	bool ans = false;
	const int* p = a;
	for (int j = 0; j < n; j++)
	{
	for (const int* i = a; i != a+n; i++)
	{
		if ((*i)*2 == *p)
		{
			ans = true;
		}
	}
		p++;
	}
	return ans;
}

int main()
{
	int array1[5] = {1,3,4,7,14};
	int array2[4] = {1,3,5,7};
	cout << func(array1,5) << endl;
	cout << func(array2,4) << endl;
	return 0;
}