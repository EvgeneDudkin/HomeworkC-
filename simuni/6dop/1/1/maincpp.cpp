#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	string s2 = "april";
	getline(cin,s);
	int count = 0;
	for(int i = 0; i < s.length(); ++i)
        if(s[i] == s2[0])
            if(s.substr(i, s2.length()) == s2)
            {
                ++count;
                i += s2.length() - 1;
            }
	cout << count << endl;
	return 0;
}