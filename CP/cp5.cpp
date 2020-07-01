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
    map<char,int>mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    string s1;
    cin>>s1;
    map<char,int>mp1;
    for (int i = 0; i < s1.length(); i++)
    {
        mp1[s1[i]]++;
    }
    bool flag=true;
    int count=0;
    for (auto x : mp1){
        char ch= x.first;
        if(mp[ch]==0){
           flag=false; 
        }else if(mp[ch]>=mp1[ch]){
            count+=mp1[ch];
        }
        else{
            count+=mp[ch];
        }
    }
    if(flag){
        cout<<count;
    }else{
        cout<<-1;
    }
}