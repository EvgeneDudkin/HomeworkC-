#include <iostream>
#include <string.h>
using namespace std;

class myString
{
	char* p;
	int len;
public:
	myString(const char* s = "")
	{
		len = strlen(s);
		p = new char[len + 1];
		strcpy(p,s);
	}
	~myString()
	{
		delete[] p;
	}
	myString& operator= (const myString& from)
	{
		if (this != &from){
			len = from.len;
			delete[] p;
			p = new char[len + 1];
			strcpy(p,from.p);
		}
		return *this;
	
	}
	myString(const myString& from):
		len(from.len)
	{
		p = new char[len + 1];
		strcpy(p,from.p);
	}
	myString& operator+= (const myString& from)
	{
		int temp = len;
		len += from.len;
		char* t = new char[len + 1];
		strcpy(t,p);
		int k = 0;
		for (int i = temp; i < len + 1; i++)
		{
			t[i] = from.p[k];
			k++;
		}
		delete[] p;
		p = new char[len + 1];;
		strcpy(p,t);
		delete[] t;
		return *this;
	}
	void print();
};

void myString::print()
{
	cout << this->p << endl;
}

int main()
{
	myString s = "abc";
	myString s1 = "klm";
	s += s1;
	s.print();
	return 0;
}