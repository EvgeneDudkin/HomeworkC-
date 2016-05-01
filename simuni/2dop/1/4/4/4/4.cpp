#include <iostream>
#include <math.h>
using namespace std;
int sum(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum;
}
int main()
{
	//our matrix
	int a[10][10] = {{1,2,3},{7,8,9},{4,5,6},{2,6,7,8,9},{1,1,1,1},{4,7,7,7}};
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int* b[10];
	int c[2][10] = {{0,0,0},{0,0,0}};
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		c[0][i] = sum(a[i],10);
		c[1][j] = j;
		j++;
	}

	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 10; j ++)
	//	{
	//		cout << c[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//cout << endl;

	//sort
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (c[0][j] <= c[0][j+1])
			{
				swap(c[0][j],c[0][j+1]);
				swap(c[1][j],c[1][j+1]);
			}
		}
	}

	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 10; j ++)
	//	{
	//		cout << c[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//cout << endl;

	for(int i = 0; i < 10; i++)
	{
		b[i] = a[c[1][i]];
	}
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}