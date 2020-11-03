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

ll infi = (ll)1e15;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, sum = 0;
    cin >> n;
    vector<ll> arr(n);
    fr(i, n)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    ll m;
    cin >> m;
    vector<pair<ll, ll>> brr;
    fr(i, m)
    {
        ll a, b;
        cin >> a >> b;
        brr.push_back({a, b});
    }

    sort(brr.begin(), brr.end());

    fr(i,m){
        if(brr[i].first <= sum && brr[i].second >= sum){
            cout<<sum;
            return 0;
        }else if(brr[i].first >= sum){
            cout<<brr[i].first;
            return 0;
        }
    }

    cout<< -1;
    return 0;

}