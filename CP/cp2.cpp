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

    ll n, m;
    cin >> n >> m;
    vi arr(n+1);
    vi brr(m+1);

    fr(i,n+1) cin>>arr[i];
    fr(i,m+1) cin>>brr[i];

    if (n < m)
    {
        cout << "0/1";
    }
    else if (n > m)
    {
        if(arr[0] * brr[0] < 0) cout<<"-";
        cout<<"Infinity";
    }
    else
    {
        if(arr[0] * brr[0] < 0)cout<<"-";
        if(arr[0] < 0){arr[0] = -arr[0];}
        if(brr[0] < 0){brr[0] = -brr[0];}
        cout<< arr[0] / gcd(arr[0],brr[0]) <<"/"<< brr[0] / gcd(arr[0],brr[0]);
    }

    return 0;
}