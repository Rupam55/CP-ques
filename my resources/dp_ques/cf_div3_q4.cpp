// round 653 div3 q4 wc!!
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int calc(string s, char ch)
{
    if (s.size() == 1)
    {
        if (s[0] != ch)
            return 1;
        else
            return 0;
    }
    int mid = s.size() / 2;
    int a = s.size() / 2 - count(s.begin(), s.begin() + mid, ch);
    int b = s.size() / 2 - count(s.begin() + mid, s.end(), ch);
    b += calc(string(s.begin(), s.begin() + mid), char(ch + 1));
    a += calc(string(s.begin() + mid, s.end()), char(ch + 1));
    return min(a, b);
}

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
        string s;
        cin >> s;
        cout << calc(s, 'a')<<"\n";
    }
}