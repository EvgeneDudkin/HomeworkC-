#include <iostream>
using namespace std;

class stack{
private:
	int* head;
	int count;
	int over;
	int size;
public:
	stack ();
	void push(int n);
	int pop();
	int& max();
};

stack::stack()
{
	size = 2;
	head = new int[size];
	count = 0;
	over = 1;
}

void stack::push(int n)
{
	if (count != size * over)
	{
		head[count] = n;
		count++;
	}
	else
	{
		over++;
		int* head1 = new int[size*over];
		for (int i = 0; i < size; i++)
		{
			head1[i] = head[i];
		}
		int* temp = head;
		head = head1;
		size *= over;
		head[count] = n;
		count++;
		delete[] temp;
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

int& stack::max()
{
	int* maxim = &head[0];
	for(int i = 0; i < count - 1; i++)
	{
		if(*maxim <= head[i+1])
		{
			maxim = &head[i+1];
		}
	}
	return *maxim;
}

int main()
{
	stack s;
	s.push(3);
	s.push(1);
	s.push(9);
	s.push(100);
	s.push(11);
	s.push(19);
	s.max() = 5;
	s.max()++;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	return 0;
}