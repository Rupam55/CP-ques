#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

vector<bool> visited (100000,false);

ld dfs(vector<vector<int>> &adj, int n, int v){
    ld sum = 0;
    visited[v] = true;
    for(int i = 0; i < adj[v].size(); i++ ){
        if(!visited[adj[v][i]]){
            sum += dfs(adj, n, adj[v][i])+1;
        }
    }
    return sum ? sum/adj[v].size() : 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> adj(n, vector<int>());
    for (int i = 0; i < n-1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    cout<< fixed << setprecision(7) << dfs(adj, n, 0)<<"\n";

    return 0;
}
