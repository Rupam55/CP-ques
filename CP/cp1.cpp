#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,a,nz=0,nn=0,np=0,ans=0;
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        cin>>a;
        if(a==0){
            nz++;
        }else if(a>0){
            np++;
            ans+=(a-1);
        }else if(a<0){
            nn++;
            ans+=abs(a+1);
        }
    }
    if(nn%2!=0){
        if(nz==0){
            ans+=2;
        }else{
            ans++;
            nz--;
        }
    }
    ans+=nz;
    cout<<ans;
    
}
