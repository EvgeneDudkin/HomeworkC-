#include <iostream>
using namespace std;

class complex{
	double re;
	double im;
public:
	complex(double re_ = 0, double im_ = 0):
		re(re_),im(im_)
	{}
	friend complex operator*(complex c1, complex c2);
	complex& operator*=(complex c){
		double t1 = re*c.re - im*c.im;
		double t2 = re*c.im + re*c.re;
		re = t1;
		im = t2;
		return *this;
	}
	void print();
};

complex operator*(complex c1, complex c2){
	complex res;
	res.re = c1.re*c2.re - c1.im*c2.im;
	res.im = c1.re*c2.im + c1.re*c2.re;
	return res;
}
void complex::print()
{
	cout << re << " + i " << im << endl;
}
int main()
{
	complex c(10,11);
	complex c1(0,11);
	c.print();
	c1.print();
	(c*c1).print();
	c *= c1;
	c.print();
	return 0;
}