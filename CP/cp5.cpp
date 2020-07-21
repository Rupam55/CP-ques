// simple string
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,ans=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="Tetrahedron"){
            ans+=4;
        }else if(s=="Cube"){
            ans+=6;
        }else if(s=="Octahedron"){
            ans+=8;
        }
        else if(s=="Dodecahedron"){
            ans+=12;
        }else{
            ans+=20;
        } 
    }
    cout<<ans;
}
