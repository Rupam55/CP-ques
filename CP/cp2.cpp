// A. Oh Those Palindromes
#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s;
    unordered_map<char,ll>mp;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for(auto it : mp){
        for (int i = 0; i < it.second; i++)
        {
            cout<<it.first;
        }
    }
    return 0;
}