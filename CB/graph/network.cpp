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

// gf

bool bfs(int **residualCapacity, int source, int sink, int n, int *parent){

    bool visited[n];
    memset(visited , 0, sizeof(visited));

    queue<int> que;
    visited[source] = true;

    que.push(source);
    bool foundAugmentedPath = false;
    while(!que.empty()){
        int u = que.front();
        que.pop();
        for(int v=0; v<n; v++){
            if(visited[v] == false && residualCapacity[V] > 0){
                paretn[v] = u;
                visited[v] = true;
                que.push(v);
                if(v == sink){
                    foundAugmentedPath = true;
                    break;
                }
            }
        }
    }
}

void printA(vector<vector<int>> augmentedpath){
    for(int i=0; i<augmentedpath.size(); i++){
        for(int j=0; j<augmentedpath.size(); j++){
            cout<<augmentedpath[i][j]<<", ";
        }
        nl
    }
}

int maxFlow(int **capacity , int source, int sink, int V){
    int **residualCapacity = new int*[V];
    for(int i=0; i<v; i++){
        residualCapacity[i] =new int[V];
    }

    for(int i=0; i<v; i++){
        for(int j=0; j<v; j++){
            residualCapacity[i][j] = capacity[i][j];
        }
    }

    int *parent = new int[1000];
    vector<vector<int>> augmentedpaths;
    int maxFlow =0;

    while(bfs(residualCapacity, source, sink, v, parent)){
        vector<int> currentAugmentedPath;
        int flow = INT_MAX;
        int v = sink;
        while(v!= source){
            currentAugmentedPath.push_back(v);
            int u = paretn[v];
            if(flow> residualCapacity[u][v]){
                flow = residualCapacity[u][v];
            }
            v = u;
        }

        currentAugmentedPath.push_back(source);
        reverse(currentAugmentedPath.begin(), currentAugmentedPath.end());
        augmentedpaths.push_back(currentAugmentedPath);
        maxFlow += flow;

        v= sink;
        while(v!= source){
            int u = parent[v];
            residualCapacity[u][v] -= flow;
            residualCapacity[v][u] += flow;
            v = u;
        }
    }
    printA(augmentedpaths);
    return maxFlow;
}

//

void dev()
{
    ll v,e;
    cin>>v>>e;

    int **capacity = new int*[V];
    for(int i=0; i<V; i++){
        capacity[i] = new int[V];
    }

    for(int i=0; i<e; i++){
        int u,v,e;
        cin>>u>>v>>e;
        capacity[u][v] = c;
    }

    cout<<maxFlow(capacity, 0 ,1 ,v);
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
