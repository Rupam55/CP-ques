#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int max = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[8] = {2, 3, 5, 7, 11, 13, 17, 19};
        ll ans = 0;
        ll inter = 0;
        for (int i = 1; i < 256; i++)
        {
            int a = 0;
            int multiple = 1;
            for (int j = 0; j < 8; j++)
            {
                if ((i & (1 << j)) != 0)
                {
                    multiple *= arr[j];
                    a++;
                }
            }
            if (a % 2 != 0)
            {
                inter = n / multiple;
                // cout<<multiple<<" "<<"+"<<inter<<"\n";
                ans += inter;
            }
            else
            {
                inter = n / multiple;
                // cout<<multiple<<" "<<"-"<<inter<<"\n";
                ans -= inter;
            }
        }
        cout << ans<<"\n";
    }
}