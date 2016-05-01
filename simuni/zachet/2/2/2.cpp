#include <iostream>
using namespace std;
class cross{
protected:
	double x0;
	double y0;
	double r;
public:
	cross(double a, double b, double rad){
		if(rad < 0)
		{
			throw "r < 0 !!!";
		}
		x0 = a;
		y0 = b;
		r = rad;
	};
	void draw() const
	{
		cout << "(" << x0 << " , " << r+y0 << ") - " <<  "(" << x0 << " , " << y0-r << ");" << endl;
		cout << "(" << x0-r << " , " << y0 << ") - " <<  "(" << x0+r << " , " << y0 << ");" << endl;
	}
};

int main()
{
	cross r = cross(5,4,3);
	r.draw();
	cout << endl;
	try
	{
		cross r = cross(5,4,-1);
	}
	catch(char* s)
	{
		cout <<"Error " << s <<endl;
	}
	return 0;
}