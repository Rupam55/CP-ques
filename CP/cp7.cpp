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

int countDigit(long long n) 
{ 
    return floor(log10(n) + 1); 
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<a* (countDigit(b+1)-1);
        nl
    }

	return 0;
}
// dev