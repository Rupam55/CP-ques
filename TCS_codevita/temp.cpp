#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<char>> arr(n + 1, vector<char>(n + 1));
    vector<vector<char>> crr(n + 1, vector<char>(n + 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            crr[(n-1)-j][i] = arr[i][j];
        }
    }
    vector<vector<int>> brr(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            if (arr[j][i] == 'C')
            {
                count++;
            }
        }
        for (int j = n - 1; j >= n - count; j--)
        {
            brr[j][i] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (brr[0][i] != -1)
        {
            brr[0][i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (brr[i][0] != -1)
        {
            brr[i][0] = 1;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {

            if (brr[i][j] != -1)
            {
                if(brr[i-1][j] == -1 || brr[i][j-1] == -1){
                    brr[i][j] = 1;
                }else{
                    brr[i][j] = min(brr[i - 1][j], brr[i][j - 1])+1;
                }
            }
        }
    }
    int maxi1 = INT_MIN, maxi2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            maxi1 = max(maxi1, brr[i][j]);
        }
    }

    // second 90;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            if (crr[j][i] == 'C')
            {
                count++;
            }
        }
        for (int j = n - 1; j >= n - count; j--)
        {
            brr[j][i] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (brr[0][i] != -1)
        {
            brr[0][i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (brr[i][0] != -1)
        {
            brr[i][0] = 1;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {

            if (brr[i][j] != -1)
            {
                if(brr[i-1][j] == -1 || brr[i][j-1] == -1){
                    brr[i][j] = 1;
                }else{
                    brr[i][j] = min(brr[i - 1][j], brr[i][j - 1])+1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            maxi2 = max(maxi2, brr[i][j]);
        }
    }
    cout<<max(maxi1,maxi2);
    return 0;
}
// dev_