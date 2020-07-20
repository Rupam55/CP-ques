// cd cf 466c
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int best = 0, sum = 0;
    for (int k = 0; k < n; k++)
    {
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
    }
    cout << best << "\n";
}
