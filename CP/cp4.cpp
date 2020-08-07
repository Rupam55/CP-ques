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
        ll n, a;
        cin >> n;
        unordered_map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            mp[a]++;
        }
        map<ll, ll> ans;
        for (ll i = 2; i <= 100; i++)
        {
            int count = 0;
            if (i % 2 == 0)
            {
                for (ll j = 1; j <= (i-1) / 2; j++)
                {
                    count += min(mp[j], mp[i - j]);
                }
                count += mp[i / 2] / 2;
            }
            else
            {
                for (ll j = 1; j <= (i) / 2; j++)
                {
                    count += min(mp[j], mp[i - j]);
                }
            }
            ans[i] = count;
        }
        int f_ans=INT_MIN;
        for (auto it : ans)
        {
            // cout<<it.first<<" "<<it.second<<"\n";
            if(it.second>f_ans) f_ans = it.second;
        }
        cout<< f_ans<<"\n";
    }
}
// cf div3 661 q3