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

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vi arr(n);
		vi brr(n);
		fr(i, n){
			cin >>arr[i];
		}
		int no_1 = 0, no_0 = 0;
		fr(i, n){
			cin >>brr[i];
			if(brr[i] == 1){
				no_1++;
			}else{
				no_0++;
			}
		}

		
		bool flag = true;

		if(is_sorted(arr.begin(),arr.end()) || (no_0 && no_1)){
			cout<<"YES";
			nl
		}else{
			cout<<"NO";
			nl
		}
	}

	return 0;
}
// dev