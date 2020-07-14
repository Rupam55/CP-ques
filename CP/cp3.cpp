#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,a,count=0;
    cin>>n>>m;
    vector<int>v(n+1);
    vector<int>arr(n+1);
    unordered_map<int,int>mp;
    for (int i = 1; i <= n; i++)
    {
        cin>>a;
        arr[i]=a;
    }
    
    for (int i = n; i > 0; i--)
    {
        if(mp[arr[i]]>0){
            v[i]=count;
            mp[arr[i]]++;
        }else{
            mp[arr[i]]++;
            count++;
            v[i]=count;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        int b;
        cin>>b;
        cout<<v[b]<<"\n";
    }
}

// cd 978/B File Name
