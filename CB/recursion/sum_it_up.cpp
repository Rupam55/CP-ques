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

set<vector<int>>f_ans;
int n;

void dev(vector<int> arr,int pos,int t, vector<int>ans){

    if(t == 0){
        sort(ans.begin(),ans.end());
        f_ans.insert(ans);
        return;
    }
    if(pos == n){
        return;
    }

    

    int np = pos+1;
    dev(arr,np,t,ans);
    // 
    ans.push_back(arr[pos]);
    dev(arr,np,t-arr[pos],ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    vector<int> arr(n);
    fr(i,n){
        cin >>arr[i];
    }
    int t;
    cin>>t;
    vector<int> ans;
    dev(arr,0,t,ans);
    for(auto it : f_ans){
        for(auto it1 : it){
            cout<<it1<<" ";
        }nl
    }
    return 0;
}
