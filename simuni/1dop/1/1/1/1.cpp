#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	const int n = 1000;
	int a[n] = {};
	for(int i = 0; i < 984; i++)
	{
		a[i] = 1;
	}
	int k = n / 2;
	int y = 1;
	int temp = n / 4;
	for(int i = 0; i < y; i++)
	{
		if ( a[k] == 0)
		{
			if (temp > 1)
			{
				k -= temp;
			}
			else
			{
				k--;
			}
		}
		else
		{
			if (temp > 1)
			{
				k += temp;
			}
			else
			{
				k++;
			}		
		}
		if (a[k] != 0 && a[k+1] == 0)
		{
			break;
		}
		if (a[k] == 0 && a[k-1] != 0)
		{
			k--;
			break;
		}
		y++;
		temp /= 2;
	}
	cout << k+1 << " not null elements. " << y << " iterations" << endl;
	return 0;
}