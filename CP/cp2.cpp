// A. Towers
#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll GC = 1;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i)
        {
            GC = gcd(GC, arr[i]);
        }
        else
        {
            GC = arr[i];
        }
    }
    while (GC % 2 == 0)
        GC /= 2;
    while (GC % 3 == 0)
        GC /= 3;

    bool flag = true;
    for (ll i = 0; i < n; i++)
    {
        ll two = 1, three = 1;

        while (arr[i] % (GC * (two * 2)) == 0)
            two *= 2;
        while (arr[i] % (GC * (three * 3)) == 0)
            three *= 3;

        if (arr[i] != two * three * GC)
        {
            flag = false;
            break;
        }
    }
    if(flag)
    cout << "YES";
    else
    cout<<"NO";
    return 0;
}