#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    string s; cin>>s;
    int k = 0;

    for (int i = 0; i < n - 2; i++)
        if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')
            ++k;

    cout<<k;
}

// cd 978/B File Name
