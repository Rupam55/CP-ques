#include <bits/stdc++.h>
#include <cmath>
#include <string.h>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll a,b,res=0;
        cin>>a>>b;
        if(a>0 && b>0){
            if(a>b){
                if(a>(2*b)){
                    res=b;
                }else{
                    res=(a+b)/3;
                }
            }else{
                if(b>=(2*a)){
                    res=a;
                }else{
                    res=(a+b)/3;
                }
            }
        }else{
            res=0;
        }
        cout<<res<<"\n";
    }
}
// ques 29 date 29:5:2020