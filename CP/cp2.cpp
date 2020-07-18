// round 653 div3 q2
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        unordered_map<ll,bool>mp;
        vector<ll>v(2*n);
        for (ll i = 0; i < 2*n; i++)
        {
            cin>>v[i];
            mp[v[i]]=true;
        }
        for (size_t i = 0; i < 2*n; i++)
        {
            if(mp[v[i]]==true){
                cout<<v[i]<<" ";
            }
            mp[v[i]]=false;
        }
        cout<<"\n";
    }
}