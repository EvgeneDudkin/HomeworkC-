#include <iostream>
using namespace std;

class abc
{
public:
	static int i;
	abc()
	{
		i++;
	}
	static int now()
	{
		return i;
	}
};
int main()
{
	return 0;
}