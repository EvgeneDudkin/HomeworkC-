#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class shape{
public:
	double x;
	double y;
		shape(double x1, double y1):
			x(x1),y(y1)
		{}
		virtual double area()
			= 0;
		virtual bool contains(double a, double b)
			= 0;
};


class pryam:public shape{
public:
	double st1;
	double st2;
	pryam::pryam(double a,double b, double u, double o):
		shape(a,b)
	{
		st1 = u;
		st2 = o;
	}
	double area();
	bool contains(double a, double b);
};

bool pryam::contains(double p1, double p2)
{
	return (p1 <= x + (st2/2) && p1 >= x - (st2 /2) && p2 >= y - (st1/2) && p2 <= y + (st1/2));
}

double pryam::area(){
	return st1*st2;
}

class krug:public shape{
public:
	double r;
	krug::krug(double a,double b, double rad):
		shape(a,b)
	{
		r = rad;
	}
	double area();
	bool contains(double a, double b);
};

bool krug::contains(double p1, double p2)
{
	return ((p1-x)*(p1-x) + (p2-y)*(p2-y) <= r*r);
}

double krug::area(){
	return 3.14*r*r;
}


class shapeCollection
{
public:
	vector<shape*> v;
	shapeCollection()
	{
	}
	void add(shape* s)
	{
		v.push_back(s);
	}
	double area();
	bool contains(double p1, double p2);
};

double shapeCollection::area()
{
	double res = 0;
	for (int i = 0; i < v.size(); i++)
	{
		res += v[i]->area();
	}
	return res;
}

bool shapeCollection::contains(double p1, double p2)
{
	return any_of(v.begin(), v.end(), [p1,p2] (shape* s) {return s->contains(p1,p2);});
}

int main()
{
	shapeCollection coll;
	coll.add(new krug(0,0,5));
	coll.add(new pryam(0,0,5,5));
	coll.add(new pryam(0,0,2,4));
	cout << coll.area() << endl;
	pryam pr(0,0,5,6);
	cout << pr.contains(3,2.6) << endl;
	krug kr(1,1,4);
	cout << kr.contains(3,3) << endl;
	cout << coll.contains(1,1);
	return 0;
}