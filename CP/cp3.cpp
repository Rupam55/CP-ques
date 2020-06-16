#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,ans=0,ext=0;
    cin>>t;
    while(t!=1){
        ext=t%2;
        t>>=1;
        ans+=t;
        t+=ext;
    }
    cout<<ans;
}
