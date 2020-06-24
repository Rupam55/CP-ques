#include <bits/stdc++.h>

using namespace std;

int reach(vector<vector<int>> &adj, int dist[], int x, int y, int n)
{

    if (x == y)
    {
        return 1;
    }
    vector<bool> visited(n);
    for (size_t i = 0; i < n; i++)
    {
        visited[i] = false;
        dist[i] = INT_MAX;
    }
    queue<int> record;
    visited[x] = true;
    dist[x] = 0;
    record.push(x);

    while (!record.empty())
    {
        x = record.front();
        record.pop();

        for (int i = 0; i < adj[x].size(); i++)
        {
            if (adj[x][i] == y)
            {
                dist[adj[x][i]] = dist[x] + 1;
                return 1;
            }
            if (visited[adj[x][i]] != true)
            {
                visited[adj[x][i]] = true;
                dist[adj[x][i]] = dist[x] + 1;
                record.push(adj[x][i]);
            }
        }
    }
return 0;
}

int distance(vector<vector<int>> &adj, int x, int y, int n)
{
    int dist[n];
    if (reach(adj, dist, x, y, n) == 0)
    {
        return -1;
    }
    else
    {
        return dist[y];
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
        adj[y - 1].push_back(x - 1);
    }
    int s, t;
    cin >> s >> t;
    s--, t--;
    cout << distance(adj, s, t, n);
}