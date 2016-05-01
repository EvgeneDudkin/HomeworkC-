#include <iostream>
#include <vector>
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
};

double pryam::area(){
	return st1*st2;
}

class shapeSpec
{
	double area;
};

class krug:public shape{
public:
	int r;
	krug::krug(int a,int b, int rad):
		shape(a,b)
	{
		r = rad;
	}
	double area();
};

double krug::area(){
	return 3.14*r*r;
}


class shapeCollection
{
	vector<shape*> v;
public:
	shapeCollection()
	{
	}
	void add(shape* s)
	{
		v.push_back(s);
	}
	double area();
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
int main()
{
	shapeCollection coll;
	coll.add(new krug(0,0,5));
	coll.add(new pryam(0,0,5,5));
	coll.add(new pryam(0,0,2,4));
	cout << coll.area() << endl;
	return 0;
}