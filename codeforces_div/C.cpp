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
        ll n;
        cin >> n;
        vector<string> arr(n);
        vector<ll> count(33, 0);
        fr(i, n)
        {
            ll a;
            cin >> a;
            string s = bitset<32>(a).to_string();
            arr[i] = s;
            bool f = true;
            for (ll i = 0; i < 32 && f; i++)
            {
                if (s[i] == '1')
                {
                    count[i] += s[i] - '0';
                    f = false;
                }
            }
        }
        ll fin_ans = 0;
        fr(i, 32)
        {
            ll sum =0;

            sum = count[i]*(count[i] - 1)/2;

            fin_ans += sum;
        }
        cout<<fin_ans;
        nl
    }
    return 0;
}
// dev_
