// candies
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int infi = 10000;

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
        for (int i = 2; i < infi; i++)
        {
            int p=pow(2,i);
            p--;
            if(n%p==0){
                cout<<n/p<<"\n";
                break;
            }
        }
    }
}
