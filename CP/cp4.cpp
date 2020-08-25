#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (int i = 0; i < n; i++)
#define fr1(i, n) for (int i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<int> vi;
typedef pair<int, int> pi;

int infi = 1000000007;

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll min_a = LONG_LONG_MAX, min_b = LONG_LONG_MAX, mini = LONG_LONG_MAX;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (lcm(i, n / i) == n)
            {
                if (mini > max(i, n / i))
                {
                    mini = max(i, n / i);
                    min_a = i;
                    min_b = n / i;
                }
            }
        }
    }
    cout << min_a<< " " << min_b;
    return 0;
}
