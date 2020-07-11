#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m = 1, t=0;
    cin >> n;

    while (n)
    {
        if (n % 10 == 4)
        {
            t += m;
            n /= 10;
            m *= 2;
        }
        else
        {
            t += 2 * m;
            n /= 10;
            m *= 2;
        }
    }

    cout << t;
    return 0;
}