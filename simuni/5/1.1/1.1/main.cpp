#include <iostream>
using namespace std;
class romb{
protected:
	int x0;
	int y0;
	double d1;
	double d2;
public:
	romb(int a, int b, double diag1, double diag2){
		x0 = a;
		y0 = b;
		d1 = diag1;
		d2 = diag2;
	};
	virtual void draw();
};
void romb::draw()
{
	cout << "(" << x0 << " , " << y0 + d1/2 << ") - " <<  "(" << x0 + d2/2 << " , " << y0 << ");" << endl;
	cout <<  "(" << x0 + d2/2 << " , " << y0 << ") - " << "(" << x0 << " , " << y0 - d1/2 << ");" << endl;
	cout << "(" << x0 << " , " << y0 - d1/2 << ") - " << "(" << x0 - d2/2 << " , " << y0 << ");" << endl;
	cout << "(" << x0 - d2/2 << " , " << y0 << ") - " << "(" << x0 << " , " << y0 + d1/2 << ");" << endl;
};

class romb_shtrih:public romb{
public:
	romb_shtrih::romb_shtrih(int a, int b, int diag1, int diag2):
		romb(a,b,diag1,diag2)
	{
	}
	void draw();
};

void romb_shtrih:: draw(){
	cout << "(" << x0 << " , " << y0 + d1/2 << ") - " <<  "(" << x0 + d2/2 << " , " << y0 << ");" << endl;
	cout <<  "(" << x0 + d2/2 << " , " << y0 << ") - " << "(" << x0 << " , " << y0 - d1/2 << ");" << endl;
	cout << "(" << x0 << " , " << y0 - d1/2 << ") - " << "(" << x0 - d2/2 << " , " << y0 << ");" << endl;
	cout << "(" << x0 - d2/2 << " , " << y0 << ") - " << "(" << x0 << " , " << y0 + d1/2 << ");" << endl;
	cout << "Diag :" << endl;
	cout << "(" << x0 << " , " << y0 + d1/2 << ") - " <<  "(" << x0 << " , " << y0 - d1/2 << ");" << endl;
	cout << "(" << x0 - d2/2 << " , " << y0 << ") - " << "(" << x0 + d2/2 << " , " << y0<< ");" << endl;
}
int main()
{
	romb r = romb(5,4,3,1);
	r.draw();
	cout << endl;
	romb_shtrih r1(1,1,10,8);
	r1.draw();
	return 0;
}