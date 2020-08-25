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
typedef vector<int> vi;
typedef pair<ll, ll> pi;

ll infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
		int n, mini = 0, maxi = 0;
		cin>>n;
		vi arr(n);
		fr(i,n){
			cin>>arr[i];
			mini = min(mini,arr[i]);
			maxi = max(maxi,arr[i]);
		}
		bool flag = true;
		fr(i,n){
			arr[i]-=mini;
			if( (maxi-arr[i])%2 != 0 ){
				flag=false;
			}	
		}
		if(flag){
			cout<<"YES";
			nl
		}else{
			cout<<"NO";
			nl
		}
	}
    return 0;
}