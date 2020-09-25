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
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;
#define maxSum 100 
#define arrSize 51 
using namespace std; 

int dp[arrSize][maxSum]; 
bool visit[arrSize][maxSum]; 

int SubsetCnt(int i, int s, vector<int> arr, int n) 
{ 
	
	if (i == n) { 
		if (s == 0) 
			return 1; 
		else
			return 0; 
	} 

	if (visit[i][s + maxSum]) 
		return dp[i][s + maxSum]; 

	
	visit[i][s + maxSum] = 1; 

	
	dp[i][s + maxSum] = SubsetCnt(i + 1, s + arr[i], arr, n) 
						+ SubsetCnt(i + 1, s, arr, n); 

	
	return dp[i][s + maxSum]; 
} 

// Driver function 
int main() 
{ 
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        fr(i,n){
            cin>>arr[i];
        }
        if(SubsetCnt(0, 0, arr, n) > 1){
            cout<<"Yes";
            nl
        }else{
            cout<<"No";
            nl
        }
    } 

	 
} 
