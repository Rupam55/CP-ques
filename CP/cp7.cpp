#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,count=0,mini=INT_MAX;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = n-1; i >=0; i--)
        {
            if(v[i]>mini){
                count++;
            }
            mini=min(mini,v[i]);
        }
        cout<<count<<"\n";
    }
}