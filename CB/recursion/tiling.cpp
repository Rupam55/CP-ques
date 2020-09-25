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
#define nl cout << endl;
#define F first
#define S second
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;

ll inf = 1e18;
ll mod = 1e9 + 7 ;
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<ll> arr(n+1,0);
        arr[0]=1;
        fr1(i,n+1){
            arr[i] += arr[i-1];
            if(i-m > 0){
                arr[i]+= arr[i-m];
            }
            arr[i]%=mod;
        }
        cout<<arr[n]<<"\n";
    }
    return 0;
}