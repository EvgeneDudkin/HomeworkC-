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
		throw "Stack overflow";
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
		throw "Stack is empty";
	}
}

void f(stack& s)
{
	int* p = new int[100];
	try
	{
	cout << s.pop() << endl;
	}catch(char* str)
	{
		cout << " Error: " << str << endl;
	};
	delete[] p ;
}

int main()
{
	stack s;
	s.push(3);
	cout << s.pop() << endl;
	f(s);
	return 0;
}