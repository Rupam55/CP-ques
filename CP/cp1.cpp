#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int gcd(int a, int b)
{
    int c = a % b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin>>a>>b>>c>>d;

    int ansa, ansb;
    if (b * c >= a * d)
    {
        ansa = b * c - a * d;
        ansb = b * c;
    }
    else
    {
        ansa = a * d - b * c;
        ansb = a * d;
    }

    int ansc = gcd(ansa, ansb);

    printf("%d/%d\n", ansa / ansc, ansb / ansc);

    return 0;
}
