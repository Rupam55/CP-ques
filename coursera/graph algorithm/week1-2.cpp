#include <bits/stdc++.h>

using namespace std;

void dotopo(vector<vector<int>> &adj, int v, vector<bool> &visited, stack<int> &stack){
    visited[v]=true;

    for (int i = 0; i < adj[v].size(); i++)
    {
        if(!visited[adj[v][i]]){
            dotopo(adj,adj[v][i],visited,stack);
        }
    }
    stack.push(v+1);
}

void topo(vector<vector<int>> &adj, int n)
{

    stack<int> stack;

    vector<bool> visited(n);
    for (int i = 0; i < n; i++)
    {
        visited[i]=false;
    }
    for (int i = 0; i < n; i++) 
      if (visited[i] == false) 
        dotopo(adj,i, visited, stack); 

    while (stack.empty() == false) 
    { 
        cout << stack.top() << " "; 
        stack.pop(); 
    } 
    
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n, vector<int>());
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
    }
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout<<i+1<<" ";
    //     for (size_t j = 0; j < adj[i].size(); j++)
    //     {
    //         cout<<adj[i][j]+1<<" ";
    //     }cout<<"\n";

    // }

    topo(adj, n);
}
