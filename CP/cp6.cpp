#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll no_0, no_1;
	cin >> no_0 >> no_1;
	if (no_1 >= (no_0 - 1) && no_1 <= ((no_0 + 1) * 2))
	{
		ll val = no_0 + ((no_0 + 1) * 2);
		vector<ll> ans(val, 2);
		for (ll i = 2; i < val; i += 3)
		{
			ans[i] = 0;
		}
		if (no_1 == no_0 - 1)
		{
			for (ll i = 3; i < val-2 ; i+=3)
			{
				ans[i]=1;
			}
		}else if(no_1 >= no_0){
			for (ll i = 0; i < val && i < no_1*3 ; i+=3)
			{
				ans[i]=1;
			}
			no_1-=no_0+1;
			for (ll i = 1; i < val && i < no_1*3 ; i+=3)
			{
				ans[i]=1;
			}
		}
		for (ll i = 0; i < val; i++)
			{
				if (ans[i] != 2)
				{
					cout << ans[i];
				}
			}
	}
	else
	{
		cout << -1;
	}
	return 0;
}
