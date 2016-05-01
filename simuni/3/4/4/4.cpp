#include <iostream>
using namespace std;
bool compare(char s1[], char s2[])
{
	int i = 0;
	int j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
		{
			break;
		}
	}
	if (s1[i] == '\0' && s2[j] == '\0')
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int main()
{
	char s1[100];
	char s2[100];
	cin.getline(s1,100);
	cin.getline(s2,100);
	bool b = compare(s1,s2);
	cout << b << endl;
	return 0;
}