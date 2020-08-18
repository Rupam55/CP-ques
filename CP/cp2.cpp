#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<ll>brr(n+1);
    vector<ll>crr(n+1);
    brr[0]=0;
    for (ll i = 0; i < n; i++)
    {
        brr[i+1]=arr[i]+brr[i];
    }
    sort(arr.begin(),arr.end());
    crr[0]=0;
    for (ll i = 0; i < n; i++)
    {
        crr[i+1]=arr[i]+crr[i];
    }
    // for (ll i = 0; i < n; i++)
    // {
    //     cout<<brr[i];
    // }cout<<"\n";
    // for (ll i = 0; i < n; i++)
    // {
    //     cout<<crr[i];
    // }
    ll m;
    cin>>m;
    ll type,l,r;
    for (ll i = 0; i < m; i++)
    {
        cin>>type>>l>>r;
        if(type == 1){
            cout<<abs(brr[r]-brr[l-1])<<"\n";
        }else{
            cout<<abs(crr[r]-crr[l-1])<<"\n";
        }
    }
    return 0;
}
//bad luck
