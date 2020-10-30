#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vs(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;

ll infi = (ll)1e15;

int count(int n)
{
    int cnt = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        cnt++;
    }
    return pow(2, cnt);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;
    vector<pair<ll, ll>> arr;

    for (int i = 1; i <= b; i++)
    {
        ll res = count(i);
        arr.push_back({res, i});
    }
    vi vec;
    sort(arr.rbegin(), arr.rend());
    ll sum = 0, num = 0;
    for (auto it : arr)
    {
        if (sum + it.first <= a)
        {
            sum += it.first;
            num++;
            vec.push_back(it.second);
        }
        if (sum == a)
        {
            break;
        }
    }
    if (sum == a)
    {
        cout << num;
        nl for (auto it : vec)
        {
            cout << it << " ";
        }
    }
    else
    {
        cout << -1;
    }
    return 0;
}