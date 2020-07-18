// round 653 div3 q1
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
        ll x,y,z;
        cin>>x>>y>>z;
        unordered_map<ll,ll>mp;
        mp[x]++;mp[y]++;mp[z]++;
        if(mp.size()>2){
            cout<<"NO"<<"\n";
        }else if(mp.size()==1){
            cout<<"YES"<<"\n";
            cout<<x<<" "<<y<<" "<<z<<"\n";
        }else{
            int m,mi;
            for(auto it : mp){
                if(it.second==1){
                    mi=it.first;
                }else if(it.second==2){
                    m=it.first;
                }
            }
            if(m>mi){
            cout<<"YES"<<"\n";
            for(auto it : mp){
                cout<<it.first<<" ";
            }
            cout<<1<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
}
