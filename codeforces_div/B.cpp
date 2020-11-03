#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<ll>())
#define vs(v) sort(v.begin(), v.end())
#define nl cout << endl;
#define F first
#define S second
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
// clear input stream berore it
// cin.ignore(numeric_limits<streamsize>::max(),'\n');
// getline(cin, str);

ll inf = 1e18;
ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        string s;
        cin >> s;

        vector<pair<int, int>> arr;
        vector<pair<int, int>> brr;
        ll count = 0, count_0 = 0;
        bool flag = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                count++;
                flag = true;
                if (count_0 != 0)
                {
                    brr.push_back({count_0, 0});
                    count_0 = 0;
                }
            }
            else if (count != 0 && s[i] == '0')
            {
                arr.push_back({count, 0});
                count = 0;
            }
            if (s[i] == '0' && flag)
            {
                count_0++;
            }
        }
        if (count != 0)
        {
            arr.push_back({count, 0});
        }

        // for (auto it : arr)
        // {
        //     cout << it.first << " " << it.second;
        //     nl
        // }
        // nl for (auto it : brr)
        // {
        //     cout << it.first << " " << it.second;
        //     nl
        // }

        ll ans = 0;

        for (int i = 0; i < brr.size(); i++)
        {
            if ((brr[i].first) * b < 2 * a)
            {
                ans += (brr[i].first) * b;
                if (arr[i].second == 0)
                {
                    arr[i].second = 1;
                    arr[i + 1].second = 1;
                    ans += a;
                }
                else
                {
                    arr[i].second = 1;
                    arr[i + 1].second = 1;
                }
            }
            else
            {
                if (arr[i].second == 0)
                {
                    arr[i].second = 1;
                    ans+=a;
                }
            }
        }
        if (arr[arr.size() - 1].second == 0)
        {
            ans += a;
        }
        cout << ans;
        nl
    }

    return 0;
}
//dev