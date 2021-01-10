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

// gf

//

void dev()
{
    ll n, x, c;
    cin >> n >> x;

    vi arr(n);
    fr(i, 0, n) cin >> arr[i];

    unordered_map<ll, ll> mp;
    int i = 0, k;
    for (k = x; k > 0 && i < n - 1; --k)
    {
        ll p = (ll)log2(arr[i]);
        p = (ll)power(2, p);

        // cout<<i<<" "<<arr[i]<<" "<<p<<" "<<"\n";

        arr[i] = arr[i] ^ p;

        bool flag = true;

        for (ll j = i + 1; j < n - 1 && flag; j++)
        {
            if ((arr[j] ^ p) < arr[j])
            {
                arr[j] = arr[j] ^ p;
                flag = false;
                break;
            }
        }

        if (flag)
        {
            arr[n - 1] = arr[n - 1] ^ p;
        }
        while (arr[i] <= 0)
        {
            i++;
            c = k + 1;
        }
    }

    if (c > 0 && n < 3 && c % 2 == 1)
    {
        arr[n - 2] = arr[n - 2] ^ 1;
        arr[n - 1] = arr[n - 1] ^ 1;
    }

    // nl
    fr(i, 0, n)
    {
        cout << arr[i] << " ";
    }
    nl
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        dev();
    }
    // Time();
    return 0;
}