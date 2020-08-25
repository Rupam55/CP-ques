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

ll infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2;
            nl
        }
        else
        {
            ll d = 1;
            for (ll i = 3; i <= 1000000; i += 2)
            {
                if (n % i == 0)
                {
                    d = i;
                    break;
                }
            }
            if(d == 1){
                cout << 1 << " " << n - 1;
                nl
            }
            else{
                cout << n / d << " " << n - (n / d);
                nl
            }
        }
    }
    return 0;
}