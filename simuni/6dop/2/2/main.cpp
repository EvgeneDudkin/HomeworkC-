#include <iostream>
using namespace std;

class rational
{
public:
	double chisl;
	double znam;
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
int NOD(int a, int b)
{
    while(a > 0 && b > 0)
 
        if(a > b)
            a %= b;
 
        else
            b %= a;
 
    return a + b;
}
ostream& operator<<(ostream& output, const rational& r)
{
	int nod = NOD(r.chisl,r.znam);
	output << r.chisl/nod << "/" << r.znam/nod;
	return output;
}

int main()
{
	rational r(3,9);
	r.print();
	cout << r << endl;
	return 0;
}