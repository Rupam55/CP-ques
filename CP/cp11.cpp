#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (int i = 0; i < n; i++)
#define fr1(i, n) for (int i = 1; i <= n; i++)
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
typedef pair<int, int> pi;

int infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;

        bool flag = true;
		for(int i=2 ; i*i< n && flag; i++){
			if(n %i == 0){
				ll num = n/i;
				for(int j = i+1; j*j < num && flag; j++){
					if(num % j == 0){
						if(i != j && i != num && j != num){
							cout<<"YES"<<"\n"<<i<<" "<<j<<" "<<num/j<<"\n";
							flag = false;
						}
					}
				}
			}
		}
		if(flag){
			cout<<"NO";
			nl
		}
	}
}
// dev 

