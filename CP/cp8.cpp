// if you are reading this i will curse you
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
    ll n,vb,vs,x,y;
    cin>>n>>vb>>vs;

    vector<ld> arr(n);
    fr(i,n) cin>>arr[i];

    cin>>x>>y;

    ld mn = INT_MAX;
    ll ans =1;
    for(int i=1; i<n; i++){
        ld dist_t =( sqrt((x-arr[i])*(x-arr[i]) + (y)*(y)) ) / vs;
        ld time = arr[i] / vb;

        if(dist_t + time <= mn){
            // cout<<mn<<" "<<dist_t<<" "<<time;
            // nl
            mn = dist_t + time;
            ans = i+1;
        }
    }

    cout<<ans;
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