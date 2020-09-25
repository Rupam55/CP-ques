#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    if(n==0){
        cout<<1;
    }else if(n==1){
        cout<<5;
    }else{
        cout<<25;
    }

    return 0;
}