#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a=i;
        a=a%4;
        cout<<char(a+97);
    }
    
}

// Lucky String
