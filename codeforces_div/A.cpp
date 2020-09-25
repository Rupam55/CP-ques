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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, res;
        cin >> n;

        res = n * (n - 1) / 2 - 1;
        map<ll,ll> mp;
        vector<ll> arr(n);
        vector<ll> brr(n);
        fr(i, n)
        {
            cin >> arr[i];
            brr[i] = arr[i];
            mp[arr[i]]++;
        }
        bool chec = false;
        for(auto it : mp)
        {
            if(it.second >1){
                chec = true;
            }
        }
        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << "YES";
            nl
        }
        else
        {
            sort(brr.rbegin(), brr.rend());
            bool flag = true;
            fr(i, n)
            {
                if (arr[i] != brr[i])
                {
                    flag = false;
                }
            }
            if (flag && !chec)
            {
                cout << "NO";
                nl
            }
            else
            {
                cout << "YES";
                nl
            }
        }
    }
    return 0;
}
// dev_