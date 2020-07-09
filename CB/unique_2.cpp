#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    int n = 0, ans = 0;
    vector<int> a(100000);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        ans ^= a[i];
    }
    int temp = ans, pos = 0;
    while ((temp & 1) != 1)
    {
        pos++;
        temp = temp >> 1;
    }
    int mask = (1 << pos);
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] & mask) > 0)
        {
            x = x ^ a[i];
        }
    }
    y=ans^x;

    cout<<min(x,y)<<" "<<max(x,y);
}