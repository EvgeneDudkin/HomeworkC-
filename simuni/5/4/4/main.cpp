#include <iostream>
#include <string>
using namespace std;

struct par{
	int x;
	int y;
};

par firstLastSpace(string s)
{
	par p;
	int posPer = -1;
	int posPosl = -1;
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			posPer = i;
			break;
		}
		i ++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			posPosl = i;
		}
		i ++;
	}
	p.x = posPer;
	p.y = posPosl;
	return p;
}

void print(par p)
{
	cout << "1 pos - " << p.x << endl;
	cout << "posl. pos - " << p.y << endl; 
}
int main()
{
	string s;
	getline(cin,s);
	cout << s[1] << endl;
	print(firstLastSpace(s));
	return 0;
}