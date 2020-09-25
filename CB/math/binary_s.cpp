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
#define ds(a) sort(a, a + n, greater<ll>())
#define vs(v) sort(v.begin(), v.end());
#define nl cout << endl;
#define F first
#define S second
typedef vector<ll> vi;
typedef vector<ll> vl;
typedef pair<ll, ll> pi;
typedef pair<ll, ll> pl;

ll inf = 1e18;
ll mod = 1e9 + 7 ;
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll>> dp(n+1);
        dp[0].first=1;
        dp[0].second=1;
        for(ll i =1; i< n; i++){
            dp[i].first = dp[i-1].first + dp[i-1].second;
            dp[i].second = dp[i-1].first;
        }
        cout<<dp[n-1].first + dp[n-1].second<<"\n";
    }
    return 0;
}