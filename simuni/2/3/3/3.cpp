#include <iostream>
using namespace std;
void order(int &x, int &y, int &z)
{
	int p[3];
	p[0] = x;
	p[1] = y;
	p[2] = z;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (p[j] >= p[j+1])
			{
				swap(p[j],p[j+1]);
			}
		}
	}
	x = p[0];
	y = p[1];
	z = p[2];
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	cout << "Enter c" << endl;
	cin >> c;
	order(a,b,c);
	cout << "a = " << a << " , b = " << b << " , c = " << c << endl;
	return 0;
}
