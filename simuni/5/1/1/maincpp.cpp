#include <iostream>
using namespace std;
class romb{
	int x0;
	int y0;
	int d1;
	int d2;
public:
	romb(int a, int b, int diag1, int diag2){
		x0 = a;
		y0 = b;
		d1 = diag1;
		d2 = diag2;
	};
	virtual void draw(romb r);
};
void romb::draw(romb r)
{
	cout << "(" << r.x0 << "," << r.y0 + r.d1 << ");" <<  "(" << r.x0 + r.d2 << "," << r.y0 << ");" << endl;
	cout <<  "(" << r.x0 + r.d2 << "," << r.y0 << ");" << "(" << r.x0 << "," << r.y0 - r.d1 << ");" << endl;
	cout << "(" << r.x0 << "," << r.y0 - r.d1 << ");" << "(" << r.x0 - r.d2 << "," << r.y0 << ");" << endl;
	cout << "(" << r.x0 - r.d2 << "," << r.y0 << ");" << "(" << r.x0 << "," << r.y0 + r.d1 << ");" << endl;
};

int main()
{
	romb r = romb(5,4,3,1);
	r.draw(r);

	return 0;
}