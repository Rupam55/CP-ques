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

vector<string> arr;

void bracket(ll n,ll j, ll o, ll c, string s){

    if(j == 2*n){
        arr.push_back(s);
        return;
    }
    if(o < n){
        s[j]='(';
        bracket(n,j+1,o+1,c,s);
    }
    if(c < o){
        s[j]=')';
        bracket(n,j+1,o,c+1,s);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll n;
    cin>>n;
    ll o=0,c=0,j=0;
    string s(2*n,'0');
    bracket (n,j,o,c,s);
    sort(arr.rbegin(),arr.rend());
    for(auto it : arr){
        cout<<it;
        nl
    }
    return 0;
}