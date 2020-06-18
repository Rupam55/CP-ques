#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

bool isPrime(ll n) 
{ 
	if (n <= 1) 
		return false; 
	if (n <= 3) 
		return true; 

	if (n % 2 == 0 || n % 3 == 0) 
		return false; 

	for (ll i = 5; i * i <= n; i = i + 6) 
		if (n % i == 0 || n % (i + 2) == 0) 
			return false; 

	return true; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin>>n>>m;

    vector<ll>v;
    
    for (ll i = 2; i <= n; i++) { 
		if (isPrime(i)) 
            v.push_back(i);
	}
    ll ans=0;
    for(ll i=0;i<v.size();i++){
        for(ll j=0;j<v.size();j++){
            if(v[j]+v[j+1]+1==v[i]){
                ans++;
                break;
            }
        }
    }
    if(ans==m){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
