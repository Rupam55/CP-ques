#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << "\n";
#define F first
#define S second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, maxi = INT_MIN;
        cin >> n >> k;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
            maxi = max(maxi, mp[a]);
        }
        vector<map<ll, ll>> arr;
        while (maxi--)
        {
            map<ll, ll> tem;
            for (auto it : mp)
            {
                if (it.second > 0)
                {
                    mp[it.first]--;
                    tem[it.first]++;
                }
            }
            arr.push_back(tem);
        }
        ll ans = arr.size() * k;
        for (int i = arr.size() - 1; i > 0; i--)
        {
            for (auto it : arr[i])
            {
                arr[i - 1][it.first] += arr[i][it.first];
                arr[i][it.first] = 0;
            }
            ll curr = k * i;
            ll disp = 0;
            for (auto it : arr[i - 1])
            {
                if (it.second > 1)
                {
                    disp += it.second;
                }
            }
            ans = min(curr + disp, ans);
        }
        cout << ans << "\n";
    }
    return 0;
}
// dev_