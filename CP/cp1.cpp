#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,maxi=INT_MIN;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        maxi=max(maxi,a);
    }
    if(maxi>k){
        cout<<maxi-k;
    }else{
        cout<<0;
    }
    
}
// The Hurdle Race