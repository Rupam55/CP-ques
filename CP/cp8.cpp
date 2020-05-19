#include <bits/stdc++.h>
#include <cmath>
#include <string.h>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<ll> v;
    ll n,a,m;
    cin>>n;
    unordered_map<int, int> mp;
    for (ll i = 1; i <= n; i++)
    {
        cin>>a;
        v.push_back(a);
        if(!mp[a]){
            mp[a] = i;
        }
    }
    cin>>m;
    for (ll i = 0; i < m; i++)
    {
        cin>>a;
        std::vector<ll>::iterator it , it2;
        if (mp[a])
        {
            cout << "Yes " << mp[a] <<"\n";
        }
        else{
            it2 = std::lower_bound(v.begin(), v.end(), a);
            cout<<"No "<<(it2 - v.begin() + 1)<<"\n";
        }
    }
    
    
    
}
// ques 2 date 18:5:2020