#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (!mp[a] && !mp[b] && !mp[c])
        {
            mp[a] = 1;
            mp[b] = 2;
            mp[c] = 3;
        }
        else if (mp[a])
        {
            if (mp[a] == 1)
                mp[b] = 2, mp[c] = 3;
            else if (mp[a] == 2)
                mp[b] = 3, mp[c] = 1;
            else
                mp[b] = 1, mp[c] = 2;
        }
        else if (mp[b])
        {
            if (mp[b] == 1)
                mp[a] = 2, mp[c] = 3;
            else if (mp[b] == 2)
                mp[a] = 3, mp[c] = 1;
            else
                mp[a] = 1, mp[c] = 2;
        }
        else if (mp[c])
        {
            if (mp[c] == 1)
                mp[b] = 2, mp[a] = 3;
            else if (mp[c] == 2)
                mp[b] = 3, mp[a] = 1;
            else
                mp[b] = 1, mp[a] = 2;
        }
    }
    for (auto x : mp)
        cout << x.second << " ";
}
