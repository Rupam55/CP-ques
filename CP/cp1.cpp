#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, d;
    cin >> n;
    bool check = true;
    vector<ll> v(n);
    unordered_map<ll, pair<ll, ll>> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]].first++;
        mp[v[i]].second = 0;
    }
    cin >> k >> d;
    ll turn = 1, count = INT_MAX,z=0;
    for (ll i = 0; i < n; i++)
    {
        if (mp[v[i]].first >= k)
        {
            check = false;
            count = min(count, z);
        }
    }

    while (check)
    {
        for (ll i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                v[i] = v[i] / d;
                mp[v[i]].first++;
                mp[v[i]].second += turn;
                if (mp[v[i]].first == k)
                {
                    check = false;
                    count = min(mp[v[i]].second, count);
                    break;
                }
            }
        }
        turn++;
    }
    cout << count;
}

// hr problemsolving (llermidiate)