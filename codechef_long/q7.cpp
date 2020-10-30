#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << "\n";
#define F first
#define S second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        string s,k;
        cin>>s>>k;
        map<char,int> mp;
        map<char,int> sub_s;
        for(int i = 0; i < s.length(); i++ ){
            mp[s[i]]++;
        }
        for(int i=0; i< k.length(); i++){
            mp[k[i]]--;
            sub_s[k[i]]++;
        }
        string pre = "",post = "";
        auto it2 = sub_s.begin();
        for(auto it1 : mp){
            string k1="",k2=k;
            k1+=it1.first;k1+=k;
            k2+=it1.first;
           if(k1 < k2){
               fr(i,it1.second){
                    pre += it1.first;
               }
           }else{
               fr(i,it1.second){
                    post += it1.first;
               }
           } 
        }
        string ans = "";
        ans+=pre;
        ans+=k;
        ans+=post;
        cout<<ans<<"\n";
    }
    return 0;
}
//dev