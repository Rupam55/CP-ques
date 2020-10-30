#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<ll>())
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

    ll t;
    cin>>t;
    while(t--){
        ll n,hig=INT_MIN,pos =0;
        cin>>n;
        vector<ll> arr(n);
        set<ll> st;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            st.insert(arr[i]);
        } 

        for(int i=0; i<n; i++){
            if(hig <= arr[i]){
                hig = arr[i];
                if(arr[i] > arr[i+1] || arr[i] > arr[i-1]){
                    pos = i;
                }
            }
        }

        if(st.size() == 1){
            cout<<-1;
            nl
        }else{
            cout<<pos+1;
            nl
        }
    }
    
    return 0;
}
//dev