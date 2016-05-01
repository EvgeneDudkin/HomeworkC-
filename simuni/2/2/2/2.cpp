#include <iostream>
using namespace std;
int main()
{
	int* a[10];
	for(int i = 0; i < 10; i++)
	{
		a[i] = new int[i];
		for(int j = 0; j < i; j++)
		{
			a[i][j] = 0; 
		}
		a[i][i] = 1;
	}
	
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			cout << a[i][j] << " "; 
		}
		cout << "\n";
	}


	for(int i = 9; i > 0; i--)
	{
		int temp = a[i];
		delete[] temp;
	}

	return 0;
}