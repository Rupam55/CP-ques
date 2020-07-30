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
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<ll> dist;
    for (ll i = 0; i < n; i++)
    {
        dist.push_back(a[i] - b[i]);
    }
    sort(dist.begin(), dist.end());

    ll sum = 0, temp;
    for (int i = 0; i < n; i++)
    {
        if (dist[i] > 0)
        {
            sum += (n - (i + 1));
        }
        else
        {
            int l = i + 1, r = n - 1, ans = -1;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (dist[mid] + dist[i] > 0)
                {
                    ans = mid;
                    r = mid - 1;
                }
                else
                    l = mid + 1;
            }
            if (ans != -1)
                sum += (n - ans);
        }
    }
    cout << sum;
}
