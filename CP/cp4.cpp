#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    int res = m/n;
    bool flag = true ;
    int i;
    for (i = res; i >=1; i--)
    {
        int ans=0;
        for(auto it : mp){
            while (it.second >= i) {
                ans++;
                it.second -= i;
            }
        }
        if(ans >= n){
            cout<<i;
            return 0;
        }
    }
    cout<<0;
    return 0;
}
