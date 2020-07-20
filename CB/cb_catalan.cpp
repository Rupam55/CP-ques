#include <bits/stdc++.h>
#include <assert.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;


ll subCount(ll arr[], ll n, ll k)
{
	ll mod[k];
	memset(mod, 0, sizeof(mod));

	ll cumSum = 0;
	for (ll i = 0; i < n; i++)
	{
		cumSum += arr[i];

		mod[((cumSum % k) + k) % k]++;
	}

	ll result = 0; // Initialize result

	for (ll i = 0; i < k; i++)

		if (mod[i] > 1)
			result += (mod[i] * (mod[i] - 1)) / 2;

	result += mod[0];

	return result;
}

int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		cout << subCount(arr, n, n) << endl;
	}
}
