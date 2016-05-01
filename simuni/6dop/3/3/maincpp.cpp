#include <iostream>
#include <time.h>
using namespace std;

class timeF{
public:
	time_t sec;
	timeF()
	{
		cout << "Function started " << endl;
		sec = time(0);
	}
	~timeF()
	{
		time_t sec1 = time(0);
		cout << "Fucntion finish  " << sec1 - sec  << endl;
	}
};
int f(int a)
{
	timeF t;
	a += 10;
	a *= 100000;
	return a;
}
int main()
{
	cout << f(5);
	return 0;
}