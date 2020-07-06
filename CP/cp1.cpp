#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k, n;
    cin >> n >> k;
    vector<ll> a(2 * n + 1);

    for (ll i = 1; i <= 2 * n; i++)
    {
        a[i] = i;
    }

    for (ll i = 1; i <= k; i++)
    {
        swap(a[2 * i - 1], a[2 * i]);
    }

    for (ll i = 1; i <= 2 * n; i++)
    {
        cout << a[i] << " ";
    }
}

// permutation