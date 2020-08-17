#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pi;

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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;

        ll ans_a = a/9;
        if(a%9) ans_a++;
        ll ans_b = b/9;
        if(b%9) ans_b++;

        if(ans_a == ans_b){
            cout<<1<<" "<<ans_b;
            nl;
        }else if(ans_a > ans_b){
            cout<<1<<" "<<ans_b;
            nl;
        }else{
            cout<<0<<" "<<ans_a;
            nl;
        }
    }
    return 0;
}
// dev_