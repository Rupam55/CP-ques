#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    vector<ll>vect(n+1,0);
    for (ll i = 1; i <= n; i++)
    {
        cin>>vect[i];
    }
    unordered_map<ll,ll>mp;
    vector<ll>res(n+1,0);
    ull sum=0;
    for (ll i = 1; i <= n; i++)
    {
        res[i]+=res[i-1]+(i-mp[vect[i]]);
        mp[vect[i]]=i;
        sum+=res[i];
    }
    ld fans=(2*(sum-n)+n)/(n*n*1.0);
    cout<<fixed<<setprecision(6)<<fans;

}