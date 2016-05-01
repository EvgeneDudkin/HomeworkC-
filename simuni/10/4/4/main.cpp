#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
class queue
{
public:
	T q[100];
	int size;
	queue():
		size(0)
	{}

	void push(const T& x)
	{
		if (size == 0)
		{
			q[0] = x;
			size++;
		}
		else
		{
			for ( int i = size-1; i >= 0; i--)
			{
				q[i+1] = q[i];
			}
			q[0] = x;
			size++;
		}
	}
	
	T pop()
	{
		size--;
		return q[size];
	}
};

int main()
{
	queue<int> q;
	q.push(3);
	q.push(7);
	q.push(11);
	q.push(22);
	cout << q.pop() << endl;
	cout << q.pop() << endl;
	return 0;
}
