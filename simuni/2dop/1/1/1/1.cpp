#include <iostream>
using namespace std;
void clear (int* a, int n)
{
	for (int* i = a; i <= a + n - 1; i++)
	{
		*i = 0;
	}
}
void copy(int* a, int* b, int n)
{

	for (int* i = a; i <= a + n - 1; i++)
	{
		*b = *i;
		b++;
	}
}
void func(int a[], int n)
{
	int max = *a;
	int* p = a;
	for (int* i = a; i <= a + n - 1; i++)
	{
		if (*i > max)
		{
			max = *i;
			p = i;
		}
	}
	*p = 0;
}
void comp(int a[], int n)
{
	int* p = a;
	for(int j = 0; j < n; j++)
	{
		for (int* i = a; i < a + n - 1; i++)
		{
			p++;
			if (*i <= *p)
			{
				swap (*i,*p);
			}
		}
		p = a;
	}
	bool flag = true;
	for (int* i = a; i <= a + n - 1; i++)
	{
		p++;
		if (abs(*i - *p) == 1)
		{
			cout << " yes" <<endl;
			flag = false;
			break;
		}
	}
	if (flag) 
	{
		cout << " no" << endl;
	}
}

void comp1(int a[], int n)
{
	int* p = a;
	bool flag = true;
	for(int j = 0; j < n; j++)
	{
		for(int* i = p; i < a + n; i++)
		{
			if (abs(*i - *p) == 1)
			{
				cout << " yes" <<endl;
				flag = false;
				break;
			}
		}
		p++;
	}
	if (flag) 
	{
		cout << " no" << endl;
	}
}
int main()
{
	//1
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	for (int i = 0; i < 10; i ++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	clear(a,10);
	for (int i = 0; i < 10; i ++)
	{
		cout << a[i] << " ";
	}
	int b [10] = {1,2,3,4,5,6,7,8,9,10};
	cout << endl;
	copy(a,b,10);
	for (int i = 0; i < 10; i ++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
	cout << endl;

	//2
	int c[10] = {9,2,3,4,10,5,6,7,8,1};
	for (int i = 0; i < 10; i ++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
	func(c,10);
	for (int i = 0; i < 10; i ++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
	cout << endl;

	//3
	int d[10] = {1,4,6,9,15,20,22,25,27,30};
	int f[10] = {1,30,6,9,15,20,22,25,27,2};
	for (int i = 0; i < 10; i ++)
	{
		cout << d[i] << " ";
	}
	cout << endl;
	comp1(d,10);
	cout << endl;
	for (int i = 0; i < 10; i ++)
	{
		cout << f[i] << " ";
	}
	cout << endl;
	comp1(f,10);
	cout << endl;

	return 0;
}
