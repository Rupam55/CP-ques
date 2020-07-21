// Misha and Changing Handles 
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
    cin >> t;
    unordered_map<string,string>mp;
    while (t--)
    {
        string a,b;
        cin>>a>>b;
        bool flag = true;
        for(auto it: mp){
            if(it.second==a){
                mp[it.first]=b;
                flag = false;
            }
        }
        if(flag){
            mp[a]=b;
        }
    }
    cout<<mp.size()<<"\n";
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<"\n";
    }
}
