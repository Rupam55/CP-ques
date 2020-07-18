// round 653 div3 q3
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
        bool flag = true;
        int ans=0;
        for (ll i = n-1; i >=1; i--)
        {
            if(arr[i]<=arr[i-1] && flag == true){

            }else if(arr[i]>=arr[i-1]){
                flag=false;
            }else{
                ans=i;
                break;
            }
        }
        cout<<ans<<"\n";
    }
}
