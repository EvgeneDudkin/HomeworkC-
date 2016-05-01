#include <iostream>
#include <cmath>
using namespace std;
const int size = 100;

class stack{
private:
	int head[size];
	int count;
public:
	stack ();
	void push(int n);
	int pop();
	double stack::maxsin() const
	{
		double max = -1;
		for (int j = 0; j < count - 1; j ++)
		{
			for(int i = j + 1; i < count; i++)
			{
				if (sin(head[j]*head[i]) > max)
				{
					max = sin(head[j]*head[i]);
				}
			}
		}
		return max;
	}
	mutable double max;
};

stack::stack()
{
	count = 0;
}

void stack::push(int n)
{
	if (count != size)
	{
		head[count] = n;
		count++;
	}
	else
	{
		cout << "Stack overflow" << endl;
		abort();
	}
}

int stack::pop()
{
	if (count > 0 )
	{
		count--;
		return head[count];
	}
	else
	{
		cout << " Stack is empty" << endl;
		abort();
	}
}

int main()
{
	stack s;
	s.push(3);
	s.push(5);
	s.push(2);
	s.push(1);
	cout << s.maxsin() << endl;
	return 0;
}