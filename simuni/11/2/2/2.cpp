#include <iostream>
#include <string>
using namespace std;

template <typename T>
class A<T>
{
public:
	string max();
};

template <>
string A<int>::max(){
	return 1;
};



int main()
{
	cout << numeric_limits<int>::max() << endl;
	return 0;
}