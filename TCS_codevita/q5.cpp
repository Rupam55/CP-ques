#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pfl(x) printf("%lld\n", x)
#define pb push_back
#define l(s) s.size()
#define asort(a) sort(a, a + n)
#define dsort(a) sort(a, a + n, greater<int>())
#define vasort(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;

int infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    int maxi = max(n,m);
    m = min(n,m);
    n = maxi;

    int count = 0;
    int ans;
    while (n != 1)
    {
        if(n==m){
            cout<<count;
            return 0;
        }
        for (int i = 1; i <= n/2 ; i++)
        {
            if (n % i == 0)
            {
                ans = i;
            }
        }
        n = ans;
        count++;
    }

    while (m != 1)
    {
        int ans;
        for (int i = 1; i <= m/2; i++)
        {
            if (m % i == 0)
            {
                ans = i;
            }
        }
        m = ans;
        count++;
    }

    cout<<count;
    return 0;
}