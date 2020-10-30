#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

ll inf = 1e18;
ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll sum =0;
    for(int i=1; i<=n; i++){
        if(((i*(i+1))/2 ) <= n){
            sum = i;
        }
    }
    cout<<sum;
    return 0;
}