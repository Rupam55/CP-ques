#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<int>())
#define vs(v) sort(v.begin(), v.end())
#define nl cout << endl;
#define F first
#define S second
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
// clear input stream berore it
// cin.ignore(numeric_limits<streamsize>::max(),'\n');
// getline(cin, str); 

ll inf = 1e18;
ll mod = 1e9 + 7 ;
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin>>n>>m;
    vector<ll> arr;

    ll a = 1, b = -1;
    if(m&1){
        ll mid = m/2 +1;
        for(int i =0; i<m; i++){
            if(i == 0) arr.pb(mid);
            else {
                arr.pb(mid + b);
                if(b>0) b++;
                else b--;
                swap(a,b);
            }
        }
    }else{
        ll mid_1 = m/2 ;
        ll mid_2 = m/2 +1;
        for(int i =0; i<m; i++){
            if(i == 0) arr.pb(mid_1);
            else if(i == 1) arr.pb(mid_2);
            else {
                arr.pb(mid_1 + b);
                if(b>0) b++;
                else b--;
                swap(a, b);
                swap(mid_1, mid_2);
            }
        }   
    }
    for(int i=0; i<n; i++){
        cout<<arr[i%m];
        nl
    }

    return 0;
}