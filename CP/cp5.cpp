#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    ll ans=0;
    for (ll i = 0; i < s.length(); i++)
    {
        (ans=ans% 1000003 * 16% 1000003)% 1000003;
        if(s[i]=='>'){
            ans+=8;
        }else if(s[i]=='<'){
            ans+=9;
        }else if(s[i]=='+'){
            ans+=10;
        }else if(s[i]=='-'){
            ans+=11;
        }else if(s[i]=='.'){
            ans+=12;
        }else if(s[i]==','){
            ans+=13;
        }else if(s[i]=='['){
            ans+=14;
        }else{
            ans+=15;
        }
    }
    cout<<ans;
}