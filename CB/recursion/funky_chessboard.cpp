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
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;

ll infi = 1000000007;

int n;
int arr[11][11];
int solve(int i, int j, int count)
{

	if (arr[i][j] == 0 || i < 0 || i >= n || j < 0 || j >= n)
	{
		// cout<<count<<" ";
		return count;
	}

	int ans = count;
	int num = count-1;
	arr[i][j] = 0;
	ans = min(solve(i - 2, j - 1, num), ans);
	ans = min(solve(i - 2, j + 1, num), ans);
	ans = min(solve(i + 2, j - 1, num), ans);
	ans = min(solve(i + 2, j + 1, num), ans);
	ans = min(solve(i - 1, j - 2, num), ans);
	ans = min(solve(i + 1, j - 2, num), ans);
	ans = min(solve(i - 1, j + 2, num), ans);
	ans = min(solve(i + 1, j + 2, num), ans);
	arr[i][j] = 1;
	// cout<<ans<<"\n";
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 1)
			{
				count++;
			}
		}
	}
	cout << solve(0, 0, count);
	return 0;
}