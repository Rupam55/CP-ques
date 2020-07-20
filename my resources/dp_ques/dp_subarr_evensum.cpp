// DP 
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
        ll n;
        cin >> n;
        vector<ll> arr(n);
        ll e_sum = 0;
        vector<ll> e;
        ll o_sum = 0;
        vector<ll> o;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(i%2==0)
            e_sum += arr[i];
        }

        for (ll i = 1; i < n; i++)
        {
            if (i & 1)
            {
                e.push_back(arr[i] - arr[i - 1]);
            }
            else
            {
                o.push_back(arr[i-1] - arr[i]);
            }
        }
        ll best = 0, sum = 0;
        for (ll k = 0; k < e.size(); k++)
        {
            sum = max(e[k], sum + e[k]);
            best = max(best, sum);
        }
        ll best_e=best;
        best = 0;
        sum = 0;
        for (ll k = 0; k < o.size(); k++)
        {
            sum = max(o[k], sum + o[k]);
            best = max(best, sum);
        }
        ll best_o=best;
        ll maxi=max(best_e,best_o);
        if(maxi>0){
            cout<<maxi+e_sum<<"\n";
        }else{
            cout<<e_sum<<"\n";
        }
    }
}
