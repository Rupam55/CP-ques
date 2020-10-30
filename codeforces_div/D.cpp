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
        ll n;
        cin>>n;
        map<int,int> mp;
        vector<int> arr(n);
        vector<int> brr(n,0);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        if(mp.size() == 1){
            cout<<"NO";
            nl
        }else{
            cout<<"YES";
            nl
            ll num = arr[0];
            for(int i=0 ; i <n ; i++){
                if(arr[i] == num){
                    brr[i] = 1;
                }
            }
            int num2=0;
            for(int i=0; i<n; i++){
                if(arr[i] != num){
                    num2 = i+1;
                    cout<<1<<" "<<i+1;
                    nl
                }
            }
            for(int i = 1; i <n ; i++){
                if(arr[i] == num){
                    cout<<i+1<<" "<<num2;
                    nl
                }
            }


        }

    }
    
    return 0;
}
//dev