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
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

void primeFactors(vector<pair<ll, ll>> &arr, int n)
{

    for (ll i = 2; i * i <= n; i++)
    {
        ll cnt = 0;
        while (n % i == 0)
        {
            ++cnt;
            n = n / i;
        }
        if (cnt > 0)
            arr.push_back({cnt, i});
    }
    if (n > 1)
        arr.push_back({1, n});
}

// gv

// gf

//

void dev()
{
    ll n;
    cin >> n;

    vector<ll> evens;
    vector<ll> odds;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
        {
            evens.push_back(a);
        }
        else
        {
            odds.push_back(a);
        }
    }

    sort(evens.rbegin(), evens.rend());
    sort(odds.rbegin(), odds.rend());

    ll m_a = 0, m_b = 0, turn = 1;

    while (evens.size() > 0 && odds.size() > 0)
    {
        if (turn % 2 == 0)
        {
            if (odds.front() >evens.front())
            {
                m_b += odds.front();
                odds.erase(odds.begin());
            }
            else
            {
                evens.erase(evens.begin());
            }
            turn++;
        }
        else
        {
            if (evens.front() >odds.front())
            {
                m_a += evens.front();
                evens.erase(evens.begin());
            }
            else
            {
                odds.erase(odds.begin());
            }
            turn++;
        }

        // cout<<evens.front()<<" "<<odds.front();nl
    }
    if (evens.size() == 0)
    {
        while (odds.size() != 0)
        {
            if (turn % 2 == 0)
            {
                m_b += odds.front();
                odds.erase(odds.begin());
                turn++;
            }
            else
            {
                odds.erase(odds.begin());
                turn++;
            }
        }
    }
    else
    {
        while (evens.size() != 0)
        {
            if (turn % 2 == 0)
            {
                evens.erase(evens.begin());
                turn++;
            }
            else
            {
                m_a += evens.front();
                evens.erase(evens.begin());
                turn++;
            }
        }
    }

    if (m_a == m_b)
    {
        cout << "Tie";
    }
    else if (m_a > m_b)
    {
        cout << "Alice";
    }
    else
    {
        cout << "Bob";
    }
    // cout<<m_a<<" "<<m_b;
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