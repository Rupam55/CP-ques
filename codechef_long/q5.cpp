#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<int>())
#define vs(v) sort(v.begin(), v.end())
#define nl cout << endl;
#define F first
#define S second
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n = 1;
        cin >> n;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            arr[i] = i + 1;
        }
        arr[0] = 2;
        arr[1] = 3;
        arr[2] = 1;
        if (n == 1)
        {
            cout << 1;
            nl
        }
        else if ((n & (n - 1)) == 0)
        {
            cout << -1;
            nl
        }
        else
        {
            if (n > 3)
            {
                for(int i =3; i<n; i++)
                {
                    if ((arr[i] & (arr[i] - 1)) == 0)
                    {
                        swap(arr[i], arr[i + 1]);
                        i++;
                    }
                }
            }
            fr(i, n)
            {
                cout << arr[i] << " ";
            }
            nl
        }
    }
    return 0;
}
//dev