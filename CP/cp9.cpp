#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a,b,res=0;
        cin>>a>>b;
        if(a>b){
            if(b>=(a/2)){
                res+=(a/2);
                b-=(a/2);
                a-=(res*2);
                if(a>0 &&b>1){
                    res++;
                }
            }else{
                res=b;
                b=0;
            }
        }else if(b>a){
            if(a>(b/2)){
                res+=(b/2);
                a-=(b/2);
                b-=res*2;
                if(b>0 &&a>1){
                   res++;
                }
            }else{
                res=a;
                a=0;
            }
        }else if(a==b){
            res=a/2;
            a-=res*2;
            b-=a/2;
            if(a>0&&b>1){
                res++;
            }
        }
        cout<<res<<"\n";
    }
    // Time();
}