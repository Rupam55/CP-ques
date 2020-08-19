#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	int a = s.find("AB");
	int b = s.find("BA", a + 2);
	if ((a != -1 && b != -1))
	{
		cout << "YES";
		return 0;
	}
	int c = s.find("BA");
	int d = s.find("AB", c + 2);
	if ((c != -1 && d != -1))
	{
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}
