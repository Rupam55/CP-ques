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
    cin>>n;
    while (n != 1)
    {
        cout<<n<<" ";
        for (int i = 2; i <= n; ++i)
        {
            if (n % i == 0)
            {
                n /= i;
                break;
            }
        }
    }
    cout<<n;
}

// coins
