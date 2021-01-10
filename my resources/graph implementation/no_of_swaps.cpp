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
#define fr(i, l, n) for (ll i = l; i < n; i++)
#define fr1(i, l, n) for (ll i = l; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<int>())
#define vs(v) sort(v.begin(), v.end())
#define nl cout << endl;
#define ff first
#define ss second
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
// clear input stream berore it
// cin.ignore(numeric_limits<streamsize>::max(),'\n');
// getline(cin, str);

ll inf = 1e18;
ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

// gv

// gf
int solve(vector<ll>arr, ll n){

    vp pairs; 
    vector<bool> visited(n,false);
    
    fr(i,0,n){
        pairs.push_back({arr[i] , i});
    }

    sort(pairs.rbg, pairs.red);

    ll ans = 0;
    fr(i,0,n){
        if(!visited[i] && i != pairs[i].second){
            int cycle_size = 0;
            int j = i;
            while (!visited[j]){
                visited[j] = true;
                j = pairs[j].second;
                cycle_size++;
            }
            if (cycle_size > 0){
                ans += (cycle_size - 1);
            }  
        }
    } 
    return ans;
}
//

void dev()
{
    ll n,k;
    cin>>n>>k;

    vi arr(n);
    fr(i,0,n) cin>>arr[i];

    ll ans = solve(arr , n);

    if(ans <= k){
        cout<<k - ans;
    }else{
        cout<<"NO";
    }
    nl
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        dev();
    }
    // Time();
    return 0;
}
