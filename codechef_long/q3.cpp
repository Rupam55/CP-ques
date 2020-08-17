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
        ll n,m;
        cin>>n>>m;
        vi arr(n);
        fr(i,n){
            cin>>arr[i];
        }
        ll mini=INT_MAX;
        ll pos;
        bool flag = false;
        fr(i,n){
            if(m%arr[i] == 0){
                flag = true;
                if(mini > (m/arr[i])-1){
                    mini = (m/arr[i])-1;
                    pos = arr[i];
                }
            }
        }
        if(flag) cout<<pos<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}
// dev_