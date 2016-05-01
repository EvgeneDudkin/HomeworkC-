#include <iostream>
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
	s.push(9);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	return 0;
}