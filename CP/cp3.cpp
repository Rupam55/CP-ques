#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,maxz=INT_MIN;
    cin>>n;
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        mp[a]++;
        if(a>maxz){
            maxz=a;
        }
    }
    int maxi=INT_MIN;
    for (int i = 0; i <= maxz; i++)
    {
        int b=0,c=0,d=0;
        c+=mp[i];
        d+=mp[i];
        c+=mp[i-1];
        d+=mp[i+1];
        b=max(c,d);
        maxi=max(maxi,b);
    }
    cout<<maxi;
}

// Picking Numbers
