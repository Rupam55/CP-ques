// round 653 div3 q4 wc!!
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int calc(string s, ll n, ll st, ll ed, char ch){
    while(n>0){
            if(n==1){
                if(s[0]!=ch)
                    return 1;
                else
                    return 0;
            }else{
                int a=0,b=0;
                for (int i = st; i < (ed/2-1); i++)
                {
                    if(s[i]==ch){
                        a++;
                    }
                    a=n-a;    
                }
                for (int i = ed/2; i < n; i++)
                {
                    if(s[i]==ch){
                        b++;
                    }
                    b=n-b;
                }
                return min((a+calc(s,n/2,ed/2,ed,char(ch+1))),(b+calc(s,n/2,st,ed/2,char(ch+1))));
            }
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        cout<<calc(s,n,0,n,'a');
    }
}