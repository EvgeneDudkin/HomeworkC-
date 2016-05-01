#include <iostream>
using namespace std;

class time{
	int hour;
	int min;
public:
	time(int h = 0, int m = 0);
	void print();
	void inc();
};

time::time(int h, int m){
	if ( h >= 24 || h < 0  || m >= 60 || m < 0)
	{
		throw "Ne pravilnye dannye";
	}
	else
	{
		hour = h;
		min = m;
	}
}

void time::print()
{
	cout << hour << ":" << min << endl;
}

void time::inc()
{
	min++;
	if (min == 60){
		if(hour == 23)
		{
			min = 0;
			hour = 0;
		}
		else
		{
			min = 0;
			hour++;
		}
	}
}
int main()
{
	time t(8,30);
	t.inc();
	t.print();
	try
	{
		time t(28,30);
	}catch(char* s){
		cout << s << endl;
	}
	return 0;
}
