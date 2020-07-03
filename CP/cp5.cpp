#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double aux1 = (1 - (double) (a/b)), aux2 = (1 - (double) (c/d));
		printf("%.16lf\n", (double) (a / b) * (double) (1 / (1 - (aux1 * aux2))));
}