#include <bits/stdc++.h>

using namespace std;

# define INF 0x3f3f3f3f 

int distance(vector<vector<int>> &adj, vector<vector<int>> &cost, int s, int t, int V)
{

    set<pair<int, int>> setds;

    vector<int> dist(V, INF);

    setds.insert(make_pair(0, s)); 
	dist[s] = 0; 

    while (!setds.empty()) 
	{ 
		pair<int, int> tmp = *(setds.begin()); 
		setds.erase(setds.begin()); 

		int u = tmp.second; 
 
		for (int i = 0; i < adj[u].size(); i++) 
		{ 
			int v = adj[u][i]; 
			int weight =  cost[u][i];

			if (dist[v] > dist[u] + weight) 
			{ 
				if (dist[v] != INF) 
					setds.erase(setds.find(make_pair(dist[v], v))); 

				dist[v] = dist[u] + weight; 
				setds.insert(make_pair(dist[v], v)); 
			} 
		} 
	} 

	if(dist[t]==INF){
        return -1;
    }else{
        return dist[t];
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n, vector<int>());
    vector<vector<int>> cost(n, vector<int>());
    for (int i = 0; i < m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        adj[x - 1].push_back(y - 1);
        cost[x - 1].push_back(w);
    }
    int s, t;
    cin >> s >> t;
    s--, t--;
    cout << distance(adj, cost, s, t, n);
}
