#include <iostream>
using namespace std;
#define ASSERT(x) if (x)

int main()
{
	int x = 0;
	cin >> x;
	ASSERT(x>0)
		cout << "YES" << endl;
	return 0;
}