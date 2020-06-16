#include <bits/stdc++.h>
#include <cmath>
#include <string.h>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

class Graph 
{ 
	int V;			 
	list<int> *adj;	   
public: 
	Graph(int V);			  
	void addEdge(int v, int w); 
	void longestPathLength(int c);  
	pair<int, int> bfs(int u);  
							 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w);  
	adj[w].push_back(v); 
} 

pair<int, int> Graph::bfs(int u) 
{ 
	int dis[V]; 
	memset(dis, -1, sizeof(dis)); 

	queue<int> q; 
	q.push(u); 

	dis[u] = 0; 

	while (!q.empty()) 
	{ 
		int t = q.front();	 q.pop(); 

		for (auto it = adj[t].begin(); it != adj[t].end(); it++) 
		{ 
			int v = *it; 

			if (dis[v] == -1) 
			{ 
				q.push(v); 

				dis[v] = dis[t] + 1; 
			} 
		} 
	} 

	int maxDis = 0; 
	int nodeIdx; 

	for (int i = 0; i < V; i++) 
	{ 
		if (dis[i] > maxDis) 
		{ 
			maxDis = dis[i]; 
			nodeIdx = i; 
		} 
	} 
	return make_pair(nodeIdx, maxDis); 
} 

void Graph::longestPathLength(int c) 
{ 
	pair<int, int> t1, t2; 

	t1 = bfs(0); 

	t2 = bfs(t1.first); 

	cout << t2.second*c; 
} 
int main() 
{ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,c;
    int a,b;
    cin>>n>>c;
    Graph g(n);
    for (int i = 0; i < n-1; i++)
    {
        cin>>a>>b;
        g.addEdge(a-1, b-1); 
    }
	g.longestPathLength(c); 
	return 0; 
} 
