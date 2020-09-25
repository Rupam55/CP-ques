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
        ll n,q;
        cin>>n>>q;
        vector<ll> arr(n);
        for(ll i =0; i<n; i++){
            cin>>arr[i];
        }
        ll fin_ans = 0;
        for(ll i=0; i<n; i++){
            ll k =0, sum =0;
            for(ll j=i; j<n; j+=2){
                if(k%2 == 0){
                    sum += arr[j]; 
                }else{
                    sum -= arr[j];
                }
                k++;
            }
            // cout<<sum;
            // nl
            fin_ans = max (fin_ans, sum);
        }
        cout<<fin_ans;
        nl
    }
    return 0;
}
// dev_
