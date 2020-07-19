#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

ll power(ll x, ll y, ll p)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return (power(x, y / 2, p) % p * power(x, y / 2, p) % p) % p;
    else
        return (x % p * power(x, y / 2, p) % p * power(x, y / 2, p) % p);
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
        ans = a % p;
        for (ll i = 2; i <= n; i++)
        {
            ans = (ans % p * (power(a, i, p) % p)) % p;
        }
        cout << ans << "\n";
    }
    return 0;
}