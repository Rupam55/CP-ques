#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vs(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;

int infi = 1000000007;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	while (t--)
	{
		ll x, y;
		cin >> x >> y;
		ll res = x - y;

		if(res>1){
			cout<<"YES";
			nl
		}else{
			cout<<"NO";
			nl
		}
	}
	return 0;
}
