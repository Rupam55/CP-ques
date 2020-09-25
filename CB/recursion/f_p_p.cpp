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

ll no_ways(ll n){

    if(n == 1 || n == 0){
        return 1;
    }

    return no_ways(n-1) + (n-1)*no_ways(n-2);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<no_ways(n)<<"\n";
    }
    return 0;
}