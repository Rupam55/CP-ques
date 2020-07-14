#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,ans=0,ans_b=0,ans_c=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ans += a;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        ans_b += a;
    }

    for (int i = 0; i < n - 2; i++)
    {
        int a;
        cin >> a;
        ans_c += a;
    }

    cout << ans - ans_b <<"\n"<<ans_b - ans_c << "\n";
}

// cd ds compilation error