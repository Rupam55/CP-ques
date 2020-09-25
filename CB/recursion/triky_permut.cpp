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

set<string> st;
string s;

void solve(string s, string ans, int k){

    if(s[k] == '\0'){
        st.insert(ans);
        return;
    }

    for(int i =0; i < s.length(); i++){
        char ch = s[i];
        ans[k] = ch;
        if(s[i] != '0'){
            s[i] = '0';
            solve(s,ans,k+1);
            s[i] = ch;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>s;
    string ans(s.length(),'1');
    solve(s,ans,0);
    for(auto it : st){
        cout<<it<<"\n";
    }
    return 0;
}
