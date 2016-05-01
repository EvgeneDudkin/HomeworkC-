#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Point
{
	int x;
	int y;
};
Point parser(string s)
{
	Point p;
	char x[100];
	char y[100];
	int i = 0;
	int j = 0;
	while (s[i] != ' ')
	{
		x[i] = s[i];
		i++;
	}
	i++;
	while (s[i] != '\0')
	{
		y[j] = s[i];
		j++;
		i++;
	}
	p.x = atoi(x);
	p.y = atoi(y);
	return p;
}
void print(Point p)
{
	cout << "( " << p.x << " ; " << p.y << " )" << " ";
}

double metr(int x, int y)
{
	x *= x;
	y *= y;
	return sqrt(x + y);
}

int main()
{
	Point t;
	t.x = 1;
	t.y = 1;
	vector<Point> v;
	string s;
	while((t.x != 0) || (t.y != 0))
	{
			getline(cin,s);
			t = parser(s);
			v.push_back(t);
	}
	for (int i = 0; i < v.size(); i++)
	{
		print(v[i]);
	}
	
	double max = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (metr(v[i].x, v[i].y) > max)
		{
			max = metr(v[i].x, v[i].y);
		}
	}
	cout << endl;
	for (int i = 0; i < v.size(); i++)
	{
		if (metr(v[i].x, v[i].y) == max)
		{
			print(v[i]);
		}
	}
	return 0;
}