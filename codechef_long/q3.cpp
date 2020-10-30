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
        ll n=1,k=1;
        cin>>n>>k;
        vector<ll> arr(n);
        fr(i,n){
            cin>>arr[i];
        }
        ll ans=0,steps=0;
        fr(i,n){
            ans += arr[i];
            steps++;
            if(ans < k){
                ans -= k;
                cout<<steps;
                break;
            }else{
                ans-=k;
            }
        }
        if(ans > 0){
            cout<<steps + ans/k + 1;
        }
        nl
    }
return 0;
}
//dev