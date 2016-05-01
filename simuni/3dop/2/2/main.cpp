#include <iostream>
#include <string>
using namespace std;
bool compare_ignoring_spaces(string s1, string s2)
{
	int a = s1.length();
	int b = s2.length();
	int i = 0;
	int j = 0;
	bool flag = true;
	while (i != a && j != b && flag)
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
		{
			flag = false;
		}
		if (s1[i] == ' ')
		{
			i++;
		}
		if (s2[j] == ' ')
		{
			j++;
		}
	}
	return flag;
}
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);

	cout << compare_ignoring_spaces(s1,s2) <<endl;
	return 0;
}