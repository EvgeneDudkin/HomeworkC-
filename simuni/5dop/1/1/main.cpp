#include <iostream>
using namespace std;

class time{
	int hour;
	int min;
public:
	time(int h = 0, int m = 0);
	void print();
	void inc();
	bool operator< (time t)
	{
		return (this->hour < t.hour || this->hour == t.hour && this->min < t.min);
	}
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
	cout << hour << ":" << min << " " ;
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
	time t1(9,00);
	time t2(8,40);
	if (t1 < t2)
	{
		t1.print();
		cout << " < " ;
		t2.print();
	}
	else
	{
		t1.print();
		cout << " > " ;
		t2.print();
	}
	return 0;
}
