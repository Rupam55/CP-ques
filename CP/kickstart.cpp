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
    while(t--)
    {
        int a,b,c=0,res=0,no=0;
        string s;
        cin>>a>>b;
        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='0' && i != s.length()-1){
                c++;
            }else if(s[i]=='1'){
                if(no==0){
                    no+=1;
                    if(c>= (b*2) ){
                        res += c/(b*2);
                        c=0;
                    }else{
                        c=0;
                    }   
                }else{
                    if(c> (b*2)){
                        res += c/(b*2);
                        c=0;
                    }else{
                        c=0;
                    }
                }
            }else if(s[i]=='0' && i == s.length()-1){
                c++;
                if(no==0){
                    if(c>= (b+1) ){
                        res += c/(b+1);
                        c=0;
                    }else{
                        res+=1;
                        c=0;
                    }
                }else{
                    if(c> (b) ){
                        res += c/(b*2);
                        c=0;
                    }else{
                        c=0;
                    }
                }
            }
        }
        cout<<res<<"\n";
    }
}