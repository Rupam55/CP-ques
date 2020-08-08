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
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,a;
    cin>>n;
    unordered_map<ll,ll>mp;
    unordered_map<ll,ll>ans;
    for (ll i = 0; i < n; i++)
    {
        cin>>a;
        mp[a]++;
        ans[mp[a]]++;
    }
    cin>>n;
    char ch;
    for (ll i = 0; i < n; i++)
    {
        cin>>ch;
        cin>>a;
        if(ch == '+'){
            
            mp[a]++;
            ans[mp[a]]++;   
        }else if(ch == '-'){
            ans[mp[a]]--;
            mp[a]--;
        }

        if(ans[4] >= 2){
            cout<<"YES"<<"\n";
        }else if(ans[4]== 1 && ans[2] >= 3){
            cout<<"YES"<<"\n";
        }else if(ans[6] >=1 && ans[2] >= 2){
            cout<<"YES"<<"\n";
        }else if(ans[8] >=1){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    
    return 0;
}
// dev_
