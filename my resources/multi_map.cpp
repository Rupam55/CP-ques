#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a;
    cin >> n;
    map<ll, vector<ll>> mp;
    vector<pair<ll,ll>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a].push_back(i);
    }

    for (auto x : mp){
        ll b=x.first;
        if(mp[b].size()==1){
            v.push_back({b,0});
        }
        else
        {
            set<ll> s;
            for(int i=1;i<mp[b].size();i++)
                s.insert(abs(mp[b][i]-mp[b][i-1]));

            set<ll>::iterator q=s.begin();
            if(s.size()==1){
                v.push_back({b,*q});
            }
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;

}