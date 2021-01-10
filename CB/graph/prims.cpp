// If you are reading this i will curse you
// "Its better to be hurt, than to hurt others. Nice people can live with just that."
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
#define pbp(x, y) push_back(x, y)
#define in(x) insert(x)
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
ll ninf = -1e18;
ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll power(ll x, ll y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

// gv

class DSU
{
    int *parent;
    int *rank;

public:
    DSU(int n)
    {
        parent = new int[n];
        rank = new int[n];

        for (int i = 0; i < n; i++)
        {
            parent[i] = -1;
            rank[i] = 1;
        }
    }

    // find

    int find(int i)
    {
        if (parent[i] == -1)
        {
            return i;
        }

        return parent[i] = find(parent[i]);
    }

    // union

    void unite(int x, int y)
    {

        int s1 = find(x);
        int s2 = find(y);

        if (s1 != s2)
        {
            if (rank[s1] < rank[s2])
            {
                rank[s2] += rank[s1];
                parent[s1] = s2;
            }
            else
            {
                rank[s1] += rank[s2];
                parent[s2] = s1;
            }
        }
    }
};

class edge
{
    int u, v, w;
};

class Graph
{
    vector<vector<ll>> edgel;
    int V;

public:
    Graph(int V)
    {
        this->V = V;
    }

    void addEdge(int x, int y, int w)
    {
        edgel.push_back({w, x, y});
    }

    int kruskal_mst()
    {

        sort(edgel.begin(), edgel.end());
        int ans = 0;

        DSU s(V);

        for(auto edge : edgel){
            int w = edge[0];
            int x = edge[1];
            int y = edge[2];

            int s1 = s.find(x);
            int s2 = s.find(y);

            if(s1 != s2){
                s.unite(s1,s2);
                ans += w;
            }
        }

        return ans;
    }
};

// gf

//

void dev()
{
    int n,m;
    cin>>n>>m;

    Graph g(n);

    for(int i=0; i<m; i++){
        int a,b,c;
        g.addEdge(a, b ,c);
    }

    cout<<g.kruskal_mst();
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
