#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> reverse(vector<string> v)
{
	for (int i = 0; i < v.size()/2; i++)
	{
		swap(v[i],v[v.size()- 1 - i]);
	}
	return v;
}
int main()
{
	string s;
	vector<string> v;
	getline(cin,s);
	int k = 0;
	for (int i = k; i < s.length(); i++)
	{
		string temp;
		while (s[i] != ' ' && s[i] != '\0')
		{
			temp += s[i];
			i++;
		}
		k = i;
		v.push_back(temp);
	}
	cout << endl;
	vector<string> rev;
	rev = reverse(v);
	for (int i = 0; i < rev.size(); i++)
	{
		cout << rev[i] << " ";
	}
	cout << endl;
	return 0;
}