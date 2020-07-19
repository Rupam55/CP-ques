// A. Towers
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
    map<ll,ll>mp;
    for (ll i = 0; i < n; i++)
    {
        ll a;cin>>a;
        mp[a]++;
    }
    ll maxi=INT_MIN,size,val;
    for (auto it = mp.rbegin(); it != mp.rend(); it++) { 
        if(it->second > maxi){
            maxi=it->second;
        }
    } 
    cout<<maxi<<" "<<mp.size();
}