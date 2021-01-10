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

class Graph{
    int V;
    list<pair<int ,int>> l;

public: 
    Graph(int V){
        this->V = V;
    }

    int addEdge(int u, int v){
        l.push_back({u,v});
    }

    // find

    int findSet(int i, int parent[]){
        if(parent[i] == -1){
            return i;
        }

        return findSet(parent[i], parent);
    }

    // find_compress

    int findSet_c(int i, int parent[]){
        if(parent[i] == -1){
            return i;
        }

        return parent[i] = findSet_c(parent[i], parent);
    }

    // union

    void unionSet(int x, int y, int parent[]){

        int s1= findSet(x, parent);
        int s2= findSet(y, parent);

        if(s1 != s2){
            parent[s1] = s2;
        }

    }

    // union_rank

    void unionSet_rank(int x, int y, int parent[], int rank){

        int s1= findSet(x, parent);
        int s2= findSet(y, parent);

        if(s1 != s2){
            if(rank[s1] < rank[s2]){
                rank[s2] += rank[s1];
                parent[s1] = s2;
            }else{
                rank[s1] += rank[s2];
                parent[s2] = s1;
            }
            
        }

    }

    // cycle detection
    bool cointains_cycle(){

        int *parent = new int[];
        for(int i=0; i<V; i++){
            parent[i] = -1;
        }

        for(auto edge : l){
            int i= edge.first;
            int j= edge.second;

            int s1 = findSet(i,parent);
            int s2 = findSet(j,parent);

            if(s1 != s2){
                unionSet(s1,s2,parent);
            }
            else{
                return true;
            }
        }
        return false;
    }

    // cycle detection
    bool cointains_cycle_rank(){

        int *parent = new int[V];
        int *rank = new int[V];

        for(int i=0; i<V; i++){
            parent[i] = -1;
            rank[i] = 1;
        }

        for(auto edge : l){
            int i= edge.first;
            int j= edge.second;

            int s1 = findSet(i,parent);
            int s2 = findSet(j,parent);

            if(s1 != s2){
                unionSet_rank(s1,s2,parent, rank);
            }
            else{
                return true;
            }
        }
        return false;
    }
};

// gf

//

void dev()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,0);

    
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
