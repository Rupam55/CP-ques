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

int reduceZero(int N)
{

    vector<int> dp(N + 1, 1e9);

    dp[0] = 0;

    for (int i = 0; i <= N; i++)
    {

        for (char c : to_string(i))
        {

            dp[i] = min(dp[i] , dp[i - (c - '0')] + 1);
        }
    }

    return dp[N];
}

int main()
{

    ll N;
    cin >> N;
    cout << reduceZero(N);
    return 0;
}
