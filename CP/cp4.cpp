#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    char ans[n];
    cin >> s;
    int k = n - 1, j = 0;
    if (n % 2 != 0)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (i % 2 == 0)
            {
                ans[k] = s[i];
                k--;
            }
            else
            {
                ans[j] = s[i];
                j++;
            }
        }
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (i % 2 == 0)
            {
                ans[j] = s[i];
                j++;
            }
            else
            {
                ans[k] = s[i];
                k--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
}