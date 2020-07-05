#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int max = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll j=0,count=0,ans=0;
    set<ll>s;
    for (ll i = 0; i < n; i++)
    {
        while(j<n && s.find(v[j])==s.end()){
            s.insert(v[j]);
            j++;
        }
        s.erase(v[i]);
        count=abs(j-i);
        ans+=(count*(count+1))/2;
    }
    cout<<ans;
}