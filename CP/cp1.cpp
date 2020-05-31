#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ll n, m, x, i, j, cnt, ans = 0;
    cin>>n>>m;
    ll arr[n + 1], brr[m + 1];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (j = 0; j < m; j++)
        cin >> brr[j];
    j = 0;
    cnt = 0;
    for (i = 0; i < n; i++)
    {
        while (j < m)
        {
            if (brr[j] >= arr[i])
            {
                cnt++;
                i++;
            }
            j++;
        }
    }
    cout << max(ans, n - cnt) << endl;
}
//ladder ques 26