#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
	string s, res="";
	cin >> s;
	int i = 0, n = 0;
	
	for (i = 0; i < s.length(); i++)
	{
		if (s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
		{ 
			n++;
		}
		else
		{
			if (isupper(s[i]))
			{
				if (islower(s[i + 1]))
				{
					if(s[i+2]=='*'){
						res.push_back(s[i + 1]);
						res.push_back(s[i]);
						i += 2;
					}else
					{
						res.push_back(s[i]);
					}
				}else
					{
						res.push_back(s[i]);
					}
			}else if (s[i] == '0')
			{
				if (n == 0)
				{
					res += '0';
				}
				else
				{

					res.push_back(s[n - 1]);
					n--;
				}
			}
			else
			{
				res.push_back(s[i]);
			}
		}
	}
	cout << res;
}