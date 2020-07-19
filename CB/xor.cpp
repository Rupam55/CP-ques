#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> vect(4, 0);
    for (ll i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        vect[a % 4]++;
    }
    bool flag = true;
    for (int i = 0; i < 4; i++)
    {
        if (vect[i] == 0)
        {
            flag = false;
        }
    }
    if (flag || n > 68)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}