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
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '4' || s[i] == '7'){
            count++;
        }
    }
    string str = to_string(count);

    // cout<<str;
    
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] != '4' && str[i] != '7'){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}