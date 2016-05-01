#include <iostream>
using namespace std;
void twice(int* a)
{
	*a = *a * 2;
}
int main()
{
	int a = 0;
	cout << "Enter a" << endl;
	cin >> a;
	twice(&a);
	cout << "a = " << a << endl;;
	return 0;
}