#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

ll power(ll x, ll y, ll p)
{
    ll ans;
    if (y == 0)
        return 1;
    ans=power(x, y / 2, p);
    if (y % 2 == 0)
        return (ans * ans) % p;
    else
        return ((x % p) * (ans * ans)%p)%p;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, n, p;
        ull ans = 1;
        cin >> a >> n >> p;
        ans = a;
        for (ll i = 1; i <= n; i++)
        {
            ans = power(ans, i, p);
        }
        cout << ans << "\n";
    }
    return 0;
}