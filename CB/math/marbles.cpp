#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k;
    cin >> k;
    vector<vector<ll>> T(k + 1, vector<ll>(k + 1, 0));
    for (int i = 1; i <= k; i++)
    {
        T[i][i + 1] = 1;
    }
    for (int i = 1; i <= k; i++)
    {
        T[k][i] = 2;
    }
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << T[i][j] << " ";
        }
        cout << "\n";
    }
}