#include <iostream>
using namespace std;
class shape{
protected:
	int x;
	int y;
	public:
		shape(int x1, int y1):
			x(x1),y(y1)
		{}
		virtual double area()
			= 0;
		virtual double perim()
			= 0;
};

class pryam:public shape{
public:
	int st1;
	int st2;
	pryam::pryam(int a,int b, int u, int o):
		shape(a,b)
	{
		st1 = u;
		st2 = o;
	}
	double area();
	double perim();
};

double pryam::area(){
	return st1*st2;
}

double pryam::perim(){
	return 2*(st1 + st2);
}

class krug:public shape{
public:
	int r;
	krug::krug(int a,int b, int rad):
		shape(a,b)
	{
		r = rad;
	}
	double area();
	double perim();
};

double krug::area(){
	return 3.14*r*r;
}

double krug::perim(){
	return 3.14*2*r;
}
int main()
{
	pryam p = pryam(0,0,6,5);
	pryam p1 = pryam(1,1,6,6);
	cout << p.area() << " " << p1.area() << endl;
	cout << p.perim() << " " << p1.perim() << endl;

	krug k = krug(1,1,1);
	krug k1 = krug(1,1,2);
	cout << k.area() << " " << k1.area() << endl;
	cout << k.perim() << " " << k1.perim() << endl;
	return 0;
}