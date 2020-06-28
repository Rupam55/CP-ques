#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    map<int,int>mp;
    for (size_t i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    int count=0;
    for (auto x : mp){
        count+=x.second/2;
    }    
    cout<<count;
}
// Sock Merchant

