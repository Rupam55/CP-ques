#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;
    unordered_map<int,int>mp;
    for (size_t i = 1; i <= m; i++)
    {
        mp[i]=INT_MAX;
    }
    int a,b;
    for (size_t i = 1; i <= n; i++)
    {
        cin>>a>>b;
        if(mp[a]>b){
            mp[a]=b;
        }
    }
    int sum =0;
    for (size_t i = 1; i <= m; i++)
    {
        sum+=mp[i];
    }
    if(sum>=k){
        cout<<k;
    }else{
        cout<<sum;
    }
}