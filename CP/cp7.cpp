#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<ll> vi;
typedef pair<ll, ll> pl;
typedef pair<ll, ll> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<ll>())
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

vector<ll> lucky_numbers;

void gen_value(ll num, ll no_4, ll no_7)
{
    if (num > inf)
        return;

    if (no_4 == no_7)
        lucky_numbers.push_back(num);

    gen_value(num * 10 + 7, no_4, no_7 + 1);
    gen_value(num * 10 + 4, no_4 + 1, no_7);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    gen_value(0,0,0);

    ll n;
    cin >> n;

    sort(lucky_numbers.begin(), lucky_numbers.end());
    ll pos = lower_bound(lucky_numbers.begin(), lucky_numbers.end(), n) - lucky_numbers.begin();
    cout << lucky_numbers[pos];

    return 0;
}
// dev