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
    vector<int>v(n*m);
    for (int i = 0; i < n*m; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    map<int,int>mp;
    for (int i = 0; i < n*m; i++)
    {
        mp[v[i]%k]=1;
    }
    if(mp.size()==1){
        int count=0;
        int middle=(n*m)/2;
        for (int i = 0; i < n*m; i++)
        {
            count+=abs(v[i]-v[middle])/k;
        }
        cout<<count;
    }else{
        cout<<-1;
    }
    
}
// Polo the Penguin and Matrix