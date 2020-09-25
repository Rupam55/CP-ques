#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int mod = 1000000000;

vector<ll> a, b, c;
ll k, num;

vector<vector<ll>> multiply(vector<vector<ll>> A, vector<vector<ll>> B)
{
    vector<vector<ll>> C(k + 1, vector<ll>(k + 1));
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            for (int x = 1; x <= k; x++)
            {
                C[i][j] = (C[i][j] + (A[i][x] * B[x][j]) % mod) % mod;
            }
        }
    }
    return C;
}

vector<vector<ll>> pow(vector<vector<ll>> A, ll p)
{
    if (p == 1)
    {
        return A;
    }
    if (p & 1)
    {
        return multiply(A, pow(A, p - 1));
    }

    vector<vector<ll>> X = pow(A, p / 2);
    return multiply(X, X);
}

ll compute(ll n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n <= k)
    {
        return b[n - 1];
    }
    else
    {
        vector<ll> f1(k + 1);
        for (int i = 1; i <= k; i++)
        {
            f1[i] = b[i - 1];
        }
        vector<vector<ll>> T(k + 1, vector<ll>(k + 1, 0));
        for (int i = 1; i <= k; i++)
        {
            T[i][i + 1] = 1;
        }
        for (int i = 1; i <= k; i++)
        {
            T[k][i] = c[k - i];
        }

        T = pow(T, n - 1);

        ll res = 0;
        for (int i = 1; i <= k; i++)
        {
            res = (res + (T[1][i] * f1[i]) % mod) % mod;
        }

        return res;
    }
}

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            cin >> num;
            b.push_back(num);
        }
        for (int i = 0; i < k; i++)
        {
            cin >> num;
            c.push_back(num);
        }
        cin >> n;

        cout<<compute(n)<<"\n";

        b.clear();
        c.clear();
    }
}