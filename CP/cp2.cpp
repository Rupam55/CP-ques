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
#define nl cout << endl;
#define F first
#define S second
typedef vector<ll> vi;
typedef pair<int, int> pi;


int infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vi arr(n);
        fr(i,n){
            cin>>arr[i];
        }
        ll ans = 0;
        fr(i,n){
            ll a = arr[i];
            ll j = i;
            bool flag = true;
            while( j < n && flag ){
                if((arr[j] > 0 && arr[i] > 0) || (arr[j] < 0 && arr[i] < 0)){
                    a = max(a,arr[j]);
                    j++;
                }else{
                    flag = false;
                }
            }
            i=j-1;
            ans+=a;
        }
        cout<<ans<<"\n";
    }
}