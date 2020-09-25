#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

ll main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    vector<ll> arr(n);
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<ll>crr(n,1);

    for(ll i=0; i<n-1; i++){
        if(arr[i] < arr[i+1]){
            crr[i+1]+=crr[i];
        }
    }

    for(ll i=n-1; i>0; i--){
        if(arr[i] < arr[i-1] && crr[i-1] < crr[i]+1){
            crr[i-1] = crr[i]+1;
        }
    }

    ll sum = 0;
    for(auto it : crr){
        if(it == 0) sum++;
        else sum+= it;
        // cout<<it<<" ";
    }
    cout<<sum;
    return 0;
}

// dev