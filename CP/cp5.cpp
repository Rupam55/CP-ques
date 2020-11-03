#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll, ll>> vp;
typedef pair<ll, ll> pi;

#define bg begin()
#define rbg rbegin()
#define ed end()
#define red rend()
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<int>())
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

    ll n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;
    ll count = 0;
    bool flag = false;

    ll temp = max(a, b);
    b = min(a, b);
    a = temp;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '.')
        {
            if (a > 0)
            {
                s[i] = 'a';
                a--;
            }
            swap(a, b);
        }
        else
        {
            ll temp = max(a, b);
            b = min(a, b);
            a = temp;
        }
    }

    ll ans = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a')
        {
            ans++;
        }
        // cout << s[i];
    }

    cout << ans;

    return 0;
}