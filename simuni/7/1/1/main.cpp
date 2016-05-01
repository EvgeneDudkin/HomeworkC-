#include <iostream>
using namespace std;

class rational
{
protected:
	double chisl;
	double znam;
public:
	rational(double a, double b)
	{
		chisl = a;
		znam = b;
	}
	void print();
	operator double() const
	{
		return chisl/znam;
	}
};

void rational::print()
{
	cout << chisl << "/" << znam << endl;
}

int main()
{
	rational r(1,3);
	r.print();
	double x = r;
	cout << x << endl;
	return 0;
}