#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<ll> vi;
typedef pair<ll, ll> pl;
typedef pair<ll, ll> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<ll>())
#define vs(v) sort(v.begin(), v.end())
#define nl cout << endl;
#define F first
#define S second
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
// clear input stream berore it
// cin.ignore(numeric_limits<streamsize>::max(),'\n');
// getline(cin, str);

ll inf = 1e18;
ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, d, l, no_o, no_e;
	cin >> n >> d >> l;

	vector<int> arr(n);

	if (n & 1)
	{
		no_o = (n / 2) + 1, no_e = n / 2;
	}
	else
	{
		no_o = (n / 2), no_e = n / 2;
	}

	if (d > 0)
	{
		for (int i = 1; i < n; i += 2)
		{
			arr[i] = 1;
		}

		if (no_e + d <= no_o * l && no_e + d >= no_o)
		{
			ll sum = no_e + d, val = sum / no_o, rem = sum - no_o*val;
			for (int i = 0; i < n; i += 2)
			{
				arr[i] = val;
			}
			for (int i = 0; i < n; i += 2)
			{
				if(arr[i] < l){
					ll a = l - arr[i];
					ll b = min (a, rem);
					arr[i] += b;
					rem -= b;
				}
			}
		}
		else
		{
			cout << -1;
			return 0;
		}
	}
	else
	{

		// odd - even  = -d;

		for (int i = 0; i < n; i += 2)
		{
			arr[i] = 1;
		}

		if (no_o - d <= no_e * l && no_o - d >= no_e)
		{
			ll sum = no_o - d, val = sum / no_e, rem = sum - no_e*val;
			for (int i = 1; i < n; i += 2)
			{
				arr[i] = val;
			}
			for (int i = 1; i < n; i += 2)
			{
				if(arr[i] < l && rem > 0){
					// cout<<rem<<" ";
					ll a = l - arr[i];
					ll b = min (a, rem);
					arr[i] += b;
					rem -= b;
				}
			}
		}
		else
		{
			cout << -1;
			return 0;
		}
	}

	for (auto it : arr)
	{
		cout << it << " ";
	}

	return 0;
}