#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll d,n,ans=0;
    cin>>d>>n;
    vector<int>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll prev=(v[0])%d + 1;
    for (ll i = 1; i < n; i++)
    {
        if(prev!=1){
            // cout<<d<<" "<<prev<<" ";
            ans+=(d-prev+1);       
        }
        prev=(v[i])%d +1;
    }
    cout<<ans;
}

// Vasya's Calendar