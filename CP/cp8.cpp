// mock  vita q2
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d,ans=0;
    cin>>a>>b>>c>>d;
    for (int i = a; i <= b; i++)
    {
        for (int j = c; j <= d; j++)
        {
            int f=i,s=j,maxi,mini;
            while(f>0 && s>0){
                maxi=max(f,s);
                mini=min(f,s);
                ans+=maxi/mini;
                f=mini;
                s=maxi%mini;
            }
        }
    }
    cout<<ans;
}