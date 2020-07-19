#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

ll infi = 1000000007;

ll nCr(ll n, ll k) 
{ 
    ll res = 1; 
  
    if (k > n - k) 
        k = n - k; 
  
    for (ll i = 0; i < k; ++i) { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        cout<<nCr(n-1,k-1)<<"\n";
    }
}