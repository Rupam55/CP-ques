#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin>>t;
	while(t--){
		ll n,min_arr=INT_MAX,min_brr=INT_MAX;
		cin>>n;
		vector<ll>arr(n);
		vector<ll>brr(n);
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			if(arr[i]<min_arr){
				min_arr=arr[i];
			}
		}
		for (ll i = 0; i < n; i++)
		{
			cin>>brr[i];
			if(brr[i]<min_brr){
				min_brr=brr[i];
			}
		}
		unordered_map<ll,pair<ll,ll>>mp;
		for (ll i = 0; i < n; i++)
		{
			mp[i].first = arr[i]-min_arr;
			mp[i].second = brr[i]-min_brr;
		}
		ll ans = 0;
		for (auto it : mp)
		{
			ans += max(it.second.first,it.second.second);
		}
		cout<<ans<<"\n";
	}
}
// cf div3 661 q2
