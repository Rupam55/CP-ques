#include <bits/stdc++.h>

using namespace std;

int reach(vector<vector<int>> &adj, int n)
{
    int x = 0;
    vector<int> color(n);
    for (size_t i = 0; i < n; i++)
    {
        color[i] = 0;
    }
    vector<bool> visited(n);
    for (size_t i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    queue<int> record;
    color[x] = 1;
    record.push(x);

    while (!record.empty())
    {
        x = record.front();
        record.pop();

        if (visited[x] == false)
        {
            for (int i = 0; i < adj[x].size(); i++)
            {
                if (color[x] == 1)
                {
                    if (color[adj[x][i]] == 0)
                    {
                        color[adj[x][i]] = 2;
                        record.push(adj[x][i]);
                    }
                    else if (color[adj[x][i]] == 1)
                    {
                        return 0;
                    }
                    else if (color[adj[x][i]] == 2)
                    {
                        record.push(adj[x][i]);
                    }
                }
                else if (color[x] == 2)
                {
                    if (color[adj[x][i]] == 0)
                    {
                        color[adj[x][i]] = 1;
                        record.push(adj[x][i]);
                    }
                    else if (color[adj[x][i]] == 2)
                    {
                        return 0;
                    }
                    else if (color[adj[x][i]] == 1)
                    {
                        record.push(adj[x][i]);
                    }
                }
            }
            visited[x]=true;
        }
    }
    return 1;
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
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout<<i+1<<" ";
    //     for (size_t j = 0; j < adj[i].size(); j++)
    //     {
    //         cout<<adj[i][j]+1<<" ";
    //     }cout<<"\n";

    // }
    // cout<<"\n";
    cout << reach(adj, n);
}
