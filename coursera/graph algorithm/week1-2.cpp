#include <bits/stdc++.h>

using namespace std;

int reach(vector<vector<int>> &adj, int n)
{

    int res = 0;

    vector<int> vect;
    for (size_t i = 0; i < n; i++)
    {
        vect.push_back(i);
    }

    vector<bool> visited(n);
    for (size_t i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    vector<int> record;

    while (vect.size() != 0)
    {
        vector<int>::iterator it = vect.begin();
        int y = *it;
        vect.erase(vect.begin());

        visited[y] = true;
        record.push_back(y);

        while (record.size() != 0)
        {
            int x = record[0];
            record.erase(record.begin());

            for (int i = 0; i < adj[x].size(); i++)
            {
                if (visited[adj[x][i]] != true)
                {
                    visited[adj[x][i]] = true;
                    record.push_back(adj[x][i]);
                    vect.erase(find(vect.begin(), vect.end(), adj[x][i]));
                }
            }
        }
        res++;
    }
    return res;
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

    cout << reach(adj, n);
}
