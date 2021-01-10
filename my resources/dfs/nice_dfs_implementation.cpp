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

void traverse(ll n, ll col, vector<vector<ll>> &adj, vector<bool> &visited, vector<ll> &color, vector<ll> &conflict){

    visited[n] = true;
    color[n] = col;
    
    for(int i=0; i<adj[n].size(); i++){
        if(!visited[adj[n][i]]){
            // cout<<n<<" "<<adj[n][i]<<" "<<0;
            //     nl
            traverse(adj[n][i], !col, adj, visited, color, conflict);
        }
        else if(visited[adj[n][i]]){
            if(color[n] == color[adj[n][i]]){
                // cout<<n<<" "<<adj[n][i]<<" "<<1;
                // nl
                conflict[n]= 1;
            }
        }
    }

}

void dfs (ll n, vector<vector<ll>> &adj, vector<bool> &visited, vector<ll> &color, vector<ll> &conflict){

    for(ll i=1; i<=n; i++){
        if(!visited[i]){
            traverse(i, 0, adj, visited, color, conflict);
        }
    }

}

//

void dev()
{
    ll n,m;
    cin>>n>>m;

    vector<vector<ll>> adj(n+1,vector<ll>());
    vector<bool> visited(n+1,false);
    vector<ll> color(n+1,0);
    vector<ll> conflict(n+1,0);

    for(int i=0; i<m; i++){
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    dfs( n, adj, visited, color, conflict);

    ll count=0;
    for(int i=1; i<=n; i++){
        if(conflict[i] == 1){
            count++;
        }
    }
    
    count/= 2;

    if((n-count)%2 ==1) count++;

    cout<<count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        dev();
    }
    // Time();
    return 0;
}