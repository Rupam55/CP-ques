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

vector<vector<int>> st;
vector<int> arr(11);

vector<vector<int>> dp (11,vector<int>(11,-1));

void solve(vector<int> arr, vector<int> ans, int k, int n){

    if(k == n){
        st.push_back(ans);
        return;
    }

    for(int i =0; i < n; i++){
        int ch = arr[i];
        ans[k] = ch;
        if(arr[i] != 0 && dp[arr[i]][k] == -1){
            dp[arr[i]][k] = 1;
            arr[i] = 0;
            solve(arr,ans,k+1,n);
            arr[i] = ch;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin>>n;
	for(int i =0 ;i < n; i++){
		cin>>arr[i];
	}
	vector<int> ans(n,0);
    solve(arr,ans,0,n);
	vector<string> vect;
    for(auto it : st){
		for(auto it1 : it){
			cout<<it1<<" ";
		}nl
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<dp[i][j]<<" ";
        }nl
    }
    return 0;
}
