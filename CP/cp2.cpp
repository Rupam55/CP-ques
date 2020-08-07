#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        bool flag = true;
        for (ll i = 1; i < n; i++)
        {
            if(arr[i]-arr[i-1] != 1 && arr[i]-arr[i-1] != 0 ){
                flag = false;
            }
        }
        if(flag){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
// cf div3 661 q1
