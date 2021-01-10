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
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<int>())
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

// gv

// gf

//

void dev()
{

	ll n, a, b;
	cin >> n >> a >> b;

	string s;
	cin >> s;

	ll ans =0;
	vector<vector<ll>> dp (n+1, vector<ll>(2,inf));

	dp[0][0] = b;
	dp[0][1] = inf;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1')
		{
			dp[i+1][1] = dp[i][1]+ a + 2*b;
			// dp[i+1][0] = dp[i][1]+ a + 2*b;
		}else{

			dp[i+1][0] = min(dp[i+1][0] ,dp[i][0]+(a+b));
			dp[i+1][0] = min(dp[i+1][0] , dp[i][1]+(2*a)+b);

			dp[i+1][1] = min(dp[i+1][1],dp[i][1]+a+2*b);
			dp[i+1][1] = min(dp[i+1][1] , dp[i][0]+2*(a+b));
		}
	}

	

	// for(int i=0; i<n+1; i++){
	// 	cout<<dp[i][0]<<" "<<dp[i][1];
	// 	nl
	// }
	cout<<dp[n][0];
	nl
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t = 1;
	cin >> t;
	while (t--)
	{
		dev();
	}
	// Time();
	return 0;
}