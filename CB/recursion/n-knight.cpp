// If you are reading this i will curse you
// "Its better to be hurt, than to hurt others. Nice people can live with just that"
// The world is a cage to be reborn one must destroy a world.
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
vector<vector<ll>> grid(1000, vector<ll>(1000, 0));
ll cnt = 0;
ll n = 0;
vector<pair<int, int>> Move = {{-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}};
// gf

void print()
{

	fr(i, 0, n)
	{
		fr(j, 0, n)
		{
			if (grid[i][j])
			{
				cout << "{" << i << "-" << j << "} ";
			}
		}
	}
}

bool isSafe(ll i, ll j)
{
	for (int k = 0; k < 8; k++)
	{
		if (i + Move[k].first >= n || i + Move[k].first < 0 || j + Move[k].second >= n || j + Move[k].second < 0)
		{
			continue;
		}
		if (grid[i + Move[k].first][j + Move[k].second] == 1)
		{
			return false;
		}
	}
	return true;
}

bool solve(ll num, ll i, ll j)
{

	// return
	if (num > n)
	{
		return false;
	}
	if (i >= n)
	{
		return false;
	}
	if (num == n)
	{
		cnt++;
		print();
		return false;
	}
	if (j >= n)
	{
		return solve(num, i + 1, 0);
	}

	if (isSafe(i, j))
	{

		grid[i][j] = 1;

		bool place = solve(num + 1, i, j + 1);

		if (place)
		{
			return true;
		}

		grid[i][j] = 0;
	}

	return solve(num, i, j + 1);
	return false;
}

//

void dev()
{
	cin >> n;

	solve(0, 0, 0);
	nl
			cout
		<< cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t = 1;
	// cin >> t;
	while (t--)
	{
		dev();
	}
	// Time();
	return 0;
}
