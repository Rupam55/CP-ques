// If you are reading this i will curse you
// "Its better to be hurt, than to hurt others. Nice people can live with just that"
// The world is a cage to be reborn one must destroy a world.
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll, ll>> vp;
typedef pair<ll, ll> pi;

#define bg begin()
#define rbg rbegin()
#define ed end()
#define red rend()
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

// gv

// gf

// 

void dev(){

    ll n;
    cin>>n;
    vp arr;

    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        arr.push_back({a,b});
    }
    ll no_1=0, no_2=0;
    bool flag1 = false;
    bool flag2 = false;
    for(int i=0; i<arr.size(); i++){
        if(arr[i].first %2 ==1) no_1++;
        if(arr[i].second %2 ==1) no_2++;
        if(arr[i].first %2 ==1 && arr[i].second %2 ==0) flag1 = true;
        if(arr[i].first %2 ==0 && arr[i].second %2 ==1) flag2 = true;
    }

    if(no_1%2==0 && no_2%2 ==0){
        cout<<0;
    }
    else if(no_1%2==1 && no_2%2 ==0 || no_1%2==0 && no_2%2 ==1){
        cout<<-1;
    }
    else{
        if(flag1 || flag2){
            cout<<1;
        }else{
            cout<<-1;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin>>t;
    while(t--){
        dev();
    }
    // Time();
    return 0;
}