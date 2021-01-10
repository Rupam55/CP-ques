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
ll ninf = -1e18;
ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

// gv
vvi dp (3005, vector<ll>(3005));

// gf

//

void dev()
{
    ll n;
    cin>>n;
    vi arr(n);
    fr(i,0,n){
        cin>>arr[i];
    }   

    for(int L = n-1; L >= 0; L--){
        for(int R= L; R < n; R++){
            if(L==R){
                dp[L][R] = arr[L];
            }else{
                dp[L][R] = max(arr[L] - dp[L+1][R] , arr[R] - dp[L][R-1]);
            }
        }
    }

    // fr(i,0,n){
    //     fr(j,0,n){
    //         cout<<dp[i][j]<<" ";}nl}

    cout<<dp[0][n-1];

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
