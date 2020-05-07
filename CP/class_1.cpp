#include <limits.h>
#include <stdlib.h>
#include <memory.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <bits/stdc++.h>
#include <iostream>
#define For(i, a, b) for (int i = a; i <= b; i++)
#define Forc(i, a, b) for (int i = a; i >= b; i--)
#define inf 9999999999999999
#define pb push_back
#define loop(i, n) for (int i = 0; i < n; i++)
#define mysort(arr) sort(arr, arr + sizeof(arr) / sizeof(arr[0]))
#define codechef()                     \
     ;                                 \
     ios_base::sync_with_stdio(false); \
     cin.tie(NULL);                    \
     cout.tie(NULL);
typedef long long lli;
long double infd = 1.0 / 0.0;
lli mod = 1000000007;
using namespace std;
const int maxn = 1e5 + 10;
int t, n, a[2 * maxn], m, k, u, v, d[maxn], dx[maxn], M[maxn][50], x[maxn], y[maxn];
vector<int> ke[maxn], ds;
template <typename T>
inline void read(T &x)
{
     x = 0;
     char c;
     while (!isdigit(c = getchar()))
          ;
     do
          x = x * 10 + c - 48;
     while (isdigit(c = getchar()));
}
template <typename T>
inline void writep(T x)
{ 
     if (x >= 10)
          writep(x / 10); 
     putchar(x % 10 + 48);
}
template <typename T>
inline void write(T x)
{
     if (x < 0)
     {
          putchar('-');
          x = -x;
     }
     writep(x);
}
void dfs(int u)
{
     dx[u] = 1;
     a[++m] = u;
     for (int v : ke[u])
     {
          if (!dx[v])
          {
               d[v] = d[u] + 1;
               dfs(v);
               a[++m] = u;
          }
     }
}
void build()
{
     d[n + 1] = INT_MAX;
     for (int k = 0; (1 << k) <= m; k++)
          for (int i = 0; i + (1 << k) - 1 <= m; i++)
               M[i][k] = n + 1;
     For(i, 1, m) M[i][0] = a[i];

     for (int k = 1; (1 << k) <= m; k++)
          for (int i = 1; i + (1 << k) - 1 <= m; i++)
               if (d[M[i][k - 1]] > d[M[i + (1 << (k - 1))][k - 1]])
                    M[i][k] = M[i + (1 << (k - 1))][k - 1];
               else
                    M[i][k] = M[i][k - 1];
}
int get(int u, int v)
{
     k = log2(v - u + 1);
     if (d[M[u][k]] < d[M[v - (1 << k) + 1][k]])
          return M[u][k];
     return M[v - (1 << k) + 1][k];
}
int main()
{
     codechef();
     read(n);
     read(t);
     For(i, 2, n)
     {
          read(u);
          read(v);
          ke[u].push_back(v);
          ke[v].push_back(u);
     }
     dfs(1);
     For(i, 1, m)
     {
          //  cout<<a[i]<<" ";
          if (x[a[i]])
               continue;
          x[a[i]] = i;
     }
     Forc(i, m, 1)
     {
          if (y[a[i]])
               continue;
          y[a[i]] = i;
     }
     build();
     ds.push_back(1);
     while (t--)
     {
          read(k);
          read(u);
          if (k == 1)
               ds.push_back(u);
          else
          {
               int res = n;
               for (int i : ds)
               {
                    int tg = get(x[i], y[u]);
                    if (tg == u)
                         res = min(res, min(d[u], d[i] - d[u]));
                    if (tg == i)
                         res = min(res, d[u] - d[i]);
                    if (tg == 0)
                         res = min(res, d[u]);
               }
               if (res == n)
                    res = 0;
               cout << res << '\n';
          }
     }
     return 0;
}