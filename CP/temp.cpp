#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
	unordered_map<char, int> primes_map;
	primes_map['a'] = 2;
	primes_map['b'] = 3;
	primes_map['c'] = 5;
	primes_map['d'] = 7;
	primes_map['e'] = 11;
	primes_map['f'] = 13;
	primes_map['g'] = 17;
	primes_map['h'] = 19;
	primes_map['i'] = 23;
	primes_map['j'] = 29;
	primes_map['k'] = 31;
	primes_map['l'] = 37;
	primes_map['m'] = 41;
	primes_map['n'] = 43;
	primes_map['o'] = 47;
	primes_map['p'] = 53;
	primes_map['q'] = 59;
	primes_map['r'] = 61;
	primes_map['s'] = 67;
	primes_map['t'] = 71;
	primes_map['u'] = 73;
	primes_map['v'] = 79;
	primes_map['w'] = 83;
	primes_map['x'] = 89;
	primes_map['y'] = 97;
	primes_map['z'] = 101;
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int n = s.length();
		unordered_map<int, int> mp;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j <= n - i; j++)
			{
				int val = 1;
				for (int k = 0; k < i; k++)
				{
					val = (primes_map[s[j + k]] * val) % 10000007;
				}
				mp[val]++;
			}
		}
		int ans = 0;
		for (auto it : mp)
		{
			if (it.second >= 2)
			{
				ans += it.second * (it.second - 1) / 2;
			}
		}
		cout << ans << "\n";
	}
}
// d