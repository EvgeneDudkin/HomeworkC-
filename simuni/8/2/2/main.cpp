#include <iostream>
using namespace std;

double f(double x)
{
	return x*x*x;
}

double integral(double (*p)(double),double a, double b)
{
	int N = 100;
	double c = (b-a)/N;

	for (double i = a; i < b; i+=c)
	{
		
	}
}
int main()
{

	return 0;
}