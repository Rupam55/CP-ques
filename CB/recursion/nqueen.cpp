#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll, ll>> vp;
typedef pair<ll, ll> pi;

#define bg begin()
#define rbg rbegin()
#define ed end()
#define red rend()
#define fr(i, l, n) for (ll i = l; i < n; i++)
#define fr1(i, l, n) for (ll i = l; i <= n; i++)
#define pb(x) push_back(x)
#define pbp(x, y) push_back({x, y})
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<int>())
#define vs(v) sort(v.begin(), v.end())
#define nl cout << endl;
#define ff first
#define ss second
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
// clear input stream berore it
// cin.ignore(numeric_limits<streamsize>::max(),'\n');
// getline(cin, str);

ll inf = 1e18;
ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

// bool comp(pair<int, int> a, pair<int, int> b)
// {
// }

bool isPrime(int n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

// gv
vector<vector<ll>> grid(15, vector<ll>(15, 0));
ll cnt = 0;
ll n = 0;

// gf

void print()
{

	fr(i, 0, n)
	{
		fr(j, 0, n)
		{
			if (grid[i][j] == 2)
			{
				cout << j + 1 << " ";
			}
		}
	}
	nl
}

bool isSafe(ll i, ll j)
{
	for (int k = -14; k < 15; k++)
	{
		if (i + k >= 0 && i + k < 15)
		{
			if (grid[i + k][j])
				return false;
		}
	}
	for (int l = -14; l < 15; l++)
	{
		if (j + l >= 0 && j + l < 15)
		{
			if (grid[i][j + l])
				return false;
		}
	}
	ll k = i, l = j;

	while (k >= 0 && j >= 0)
	{
		--k;
		--l;
		if (l >= 0 && l < 15 && k >= 0 && k < 15)
		{
			if (grid[k][l])
				return false;
		}
	}
	k = i, l = j;

	while (k >= 0 && j < 15)
	{
		--k;
		++l;
		if (l >= 0 && l < 15 && k >= 0 && k < 15)
		{
			if (grid[k][l])
				return false;
		}
	}
	return true;
}

bool solve(ll num, ll i)
{

	// return
	if (i > n)
	{
		return false;
	}
	if (num == n)
	{
		cnt++;
		print();
		return true;
	}

	for (int k = 0; k < n; k++)
	{
		if (isSafe(i, k))
		{

			grid[i][k] = 2;

			bool place = solve(num + 1, i + 1);

			if (place)
			{
				return true;
			}

			grid[i][k] = 0;
		}
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	solve(0, 0);
	return 0;
}
