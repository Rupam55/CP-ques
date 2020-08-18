// Amusing Joke
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

char ans[100000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int i=0,jumps = 0,pos=0;
    bool flag = true;

    while(flag && pos < s.length()-1){
        flag = false;
        i=pos;
        for (int j = i+1; j <= i+m; j++)
        {
            if(s[j] == '1'){
                pos=j;
                flag = true;
            }
        }
        // cout<<pos<<" ";
        jumps++;
    }
    if(flag){
        cout<<jumps;
    }else{
        cout<<-1;
    }
    return 0;
}