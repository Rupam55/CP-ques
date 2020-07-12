#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float x=1,ans=0,p,num=365,dnum=365;
    cin>>p;
    if(p==1){
        cout<<366;
        return 0;
    }
    while(x>(1-p)){
        x=x*(num/dnum);
        num--;
        ans++;
    }
    cout<<ans;
}