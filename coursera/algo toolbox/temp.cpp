#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, W;
    cin >> W >> n;

    vector<int> val(n);
    vector<int> wt(n);
    int Temp;
    for (size_t i = 0; i < n; i++)
    {
        cin >> Temp;
        val[i] = wt[i] = Temp;
    }
    vector<vector<int>> R(n + 1, vector<int>(W + 1));
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                R[i][w] = 0;
            else if (wt[i - 1] <= w)
                R[i][w] = max(val[i - 1] + R[i - 1][w - wt[i - 1]], R[i - 1][w]);
            else
                R[i][w] = R[i - 1][w];
        }
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int w = 0; w <= W; w++)
    //     {
    //         cout << R[i][w] << " ";
    //     }
    //     cout << "\n";
    // }

    cout<< R[n][W];
}
