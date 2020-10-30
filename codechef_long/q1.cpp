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
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << "\n";
#define F first
#define S second
typedef vector<int> vi;
typedef pair<int, int> pi;

bool flag = false;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n = 1, x = 1, y = 1, k = 1;
        cin >> n >> k >> x >> y;

        vector<bool> flag(n, true);

        flag[x] = false;

        if (x == y)
        {
            cout << "YES";
            nl
        }
        else if (k == 0)
        {
            cout << "NO";
            nl
        }
        else
        {
            for (int i = (x + k)%n; i != x; i = (i + k) % n)
            {
                flag[i] = false;
            }
            if (flag[y] == false)
            {
                cout << "YES";
                nl
            }
            else
            {
                cout << "NO";
                nl
            }
        }
    }
return 0;
}
//dev