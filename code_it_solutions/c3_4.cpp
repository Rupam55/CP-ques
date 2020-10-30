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
#define ds(a) sort(a, a + n, greater<ll>())
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<ll> vi;
typedef pair<ll, ll> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> even_sum(n + 1), odd_sum(n + 1);

    even_sum[0] = 0;
    odd_sum[0] = 0;

    for (ll i = 0; i < n; i++)
    {
        even_sum[i + 1] = max(even_sum[i], odd_sum[i] - arr[i]);
        odd_sum[i + 1] = max(odd_sum[i], even_sum[i] + arr[i]);
    }

    ll fin_ans = max(even_sum[n], odd_sum[n]);
    cout << fin_ans;
    nl return 0;
}
// dev_