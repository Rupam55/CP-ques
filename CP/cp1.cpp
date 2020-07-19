// cd cf 466c
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,sum=0;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%3==0){
        ll sum3=0,_2sum3=0,sr=0;
        for (ll i = 0; i < n-1; i++)
        {
            sr+=arr[i];
            if(sr==(2*sum/3)){
                _2sum3+=sum3;
            }
            if(sr==sum/3){
                sum3++;
            }           
        }
        cout<<_2sum3;

    }else{
        cout<<0;
    }
}
