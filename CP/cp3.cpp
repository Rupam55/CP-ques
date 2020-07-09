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
    int u=0,l=0;    
    for (int i = 0; i < s.length(); i++)
    {
        islower(s[i])?l++:u++;
    }
    (u>l)?transform(s.begin(), s.end(), s.begin(), ::toupper):transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s;
}

// cd 59/A

