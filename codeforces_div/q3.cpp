#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pb(x)               push_back(x)
#define l(s)                s.size()
#define as(a)               sort(a,a+n)
#define ds(a)               sort(a,a+n,greater<int>())
#define vas(v)              sort(v.begin(), v.end());
#define inf                 1e18
#define nl                  cout<<endl;
#define F first
#define S second
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,a;
        cin>>n;
        map<ll,ll>mp;
        for (ll i = 0; i < n; i++)
        {
            cin>>a;
            mp[a]++;
        }
        ll maxi=INT_MIN,pos=0;
        for (auto it : mp)
        {
            if(maxi<it.second){
                maxi=it.second;
                pos=it.first;
            }
        }
        // cout<<pos<<"\n";
        ll ans=0;
        // for(auto it : mp){
        //     cout<<it.first<<" "<<it.second<<"\n";
        // }
        for (auto it : mp)
        {
            if(it.second < maxi && it.first != pos ){
                ans+=it.second;
            }else if(it.second == maxi && it.first != pos){
                ans+= it.second-1;
            }
        }
        cout<<ans/(maxi-1)<<"\n";
    }
    return 0;
}
// dev_ 
