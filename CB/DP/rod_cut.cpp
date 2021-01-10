// If you are reading this i will curse you
// "Its better to be hurt, than to hurt others. Nice people can live with just that"
// The world is a cage to be reborn one must destroy a world.
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll, ll>> vp;
typedef pair<ll, ll> pi;
typedef priority_queue<int, vector<int>, greater<int>> min_heap;
typedef priority_queue<int> max_heap;

#define bg begin()
#define rbg rbegin()
#define ed end()
#define red rend()
#define fr(i, l, n) for (ll i = l; i < n; i++)
#define fr1(i, l, n) for (ll i = l; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<int>())
#define vs(v) sort(v.begin(), v.end())
#define nl cout << endl;
#define ff first
#define ss second
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
// clear input stream berore it
// cin.ignore(numeric_limits<streamsize>::max(),'\n');
// getline(cin, str);

ll inf = 1e18;
ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll power(ll x, ll y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

bool comp(const pair<string, ll> &v1,
          const pair<string, ll> &v2)
{
    return v1.second < v2.second;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

// gv
int dp[100] = {0};

// gf
int solve(int prices[], int n)
{
    if (n <= 0)
        return 0;

    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        int curr = prices[i] + solve(prices, n - (i + 1));
        ans = max(ans, curr);
    }

    return ans;
}

int solve_bu(int prices[], int n)
{

    for (int l = 1; l <= n; l++)
    {
        int ans = INT_MIN;
        for (int i = 0; i < l; i++)
        {
            int cut = i + 1;
            int curr = prices[i] + dp[l - cut];
            ans = max(ans, curr);
        }
        dp[l] = ans;
    }

    return dp[n];
}
//

void dev()
{
    int prices[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(prices) / sizeof(int);

    cout << solve(prices, n);
    nl
            cout
        << solve_bu(prices, n);
    nl
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        dev();
    }
    // Time();
    return 0;
}