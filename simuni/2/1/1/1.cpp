#include <iostream>
using namespace std;
void reverse(int a[], int n)
	{
		int* p = a;
		int* q = p + n - 1;
		for(int i = 0; i < n/2; i++)
		{
			swap(*p,*q);
			p++;
			q--;
		}
	}
int main()
{
	int* lenght = new int[10];
	int array1[10] = {1,2,3,4,5,6,7,8,9,10};
	for(int  i = 0; i < 10; i++)
	{
		cout << array1[i] << " ";
	}
	cout << "\n";
	reverse(array1,10);
	for(int  i = 0; i < 10; i++)
	{
		cout << array1[i] << " ";
	}
	delete [] lenght;
	return 0;
}