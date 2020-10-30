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
        ll n, k;
        cin >> n >> k;
        map<ll, ll> mp;
        vector<ll> a(n+1);
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        vector<vector<ll>> count (n+1,vector<ll>(n+1,0));
        
        for (ll i = 0; i < n; i++)
        {
            mp.clear();
            for (ll j = i; j < n; j++)
            {
                if(j==0){
                    count[i][j]=0;
                }else{
                    count[i][j]=count[i][j-1];
                }
                if(mp.count(a[j])){
                    if(mp[a[j]]==1){
                        count[i][j]++;
                    }
                    count[i][j]++;
                }
                mp[a[j]]++;
            }
        }

        ll ans = INT_MAX;
        vector<vector<ll>>clash (1001,vector<ll>(1001,0));

        for (ll i = 0; i <= n; i++)
        {
            clash[1][i]=count[0][i-1];
        }

        for (ll i = 1; i <= 100; i++)
        {
            for (ll j = 1; j < n; j++)
            {
                ll mini = INT_MAX;
                for (ll l = 1; l < j; l++)
                {
                    mini = min(mini, clash[i-1][l] + count[l][j-1]);
                }
                clash[i][j]=mini;
            }
        }

        for (ll i = 1; i <= 100; i++)
        {
            ans = min( ans , (i)*k + clash[i][n]);
        }

        cout<<ans<<"\n";
    }
    return 0;
}
//dev