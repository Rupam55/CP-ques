#include <bits/stdc++.h>
#include <assert.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

ll power(ll x, ll y) 
{ 
	if (y == 0) 
		return 1; 
	else if (y % 2 == 0) 
		return power(x, y / 2) * power(x, y / 2); 
	else
		return x * power(x, y / 2) * power(x, y / 2); 
}

int main()
{
	ll n;
    cin>>n;

    ll num = power(2,n+1) - 2;

    cout<<num;


}
