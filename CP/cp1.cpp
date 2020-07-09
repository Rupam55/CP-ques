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
    getline(cin,s);
    set<char>st;
    for (int i = 0; i < s.length(); i++)
    {
        st.insert(s[i]);
    }
    (st.size()%2==0)?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
}
// cd string 236/A