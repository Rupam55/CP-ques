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
        string s,s1="";
        cin>>s;
        s1+=s[0];
        for (int i = 1; i < s.length()-1; i++)
        {
            if(s[i]==s[i+1]){
                s1+=s[i];
                i++;
            }
        }
        s1+=s[s.length()-1];
        cout<<s1<<"\n";
    }
}
// ques 29 date 29:5:2020