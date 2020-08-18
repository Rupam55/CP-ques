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
    cin >> t;
    while (t--)
    {
        ll n,s=0;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            s+=arr[i];
        }
        ll best = 0, sum = 0;
        for (ll k = 0; k < n-1; k++)
        {
            sum = max(arr[k], sum + arr[k]);
            best = max(best, sum);
        }
        ll best1 = 0, sum1 = 0;
        for (ll k = 1; k < n; k++)
        {
            sum1 = max(arr[k], sum1 + arr[k]);
            best1 = max(best1, sum1);
        }
        if( best>= s || best1 >= s){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}
