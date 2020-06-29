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

    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,y,n,k;
        cin>>x>>y>>n;
        a=abs(x-y);
        b=n/x;
        c=n%x;
        if(c==y){
            cout<<n<<"\n";
        }else if(c<y){
            cout<<n-x+y-c<<"\n";
        }else{
            cout<<n-c+y<<"\n";
        }
    }
}