#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,s1;
    cin>>s>>s1;
    map<char,int>mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    map<char,int>mp1;
    for (int i = 0; i < s1.length(); i++)
    {
        mp1[s1[i]]++;
    }
    
    bool flag=true;
    for (int i = 0; i < s.length(); i++)
    {
        if(mp[s[i]]!=mp1[s[i]]){
            flag=false;
        }
    }
    if(flag==true){
        cout<<"array";
        return 0;
    }

    int count=0;
    for (int i = 0,j=0; i < s.length(); i++)
    {
        if(s[i]==s1[j]){
            count++;
            j++;
        }
    }
    if(count==s1.length()){
        cout<<"automaton";
        return 0;
    }
    flag=true;
    for (int i = 0; i < s1.length(); i++)
    {
        if(mp[s1[i]]<mp1[s1[i]]){
            flag=false;
        }
    }
    if(flag==true){
        cout<<"both";
        return 0;
    }else{
        cout<<"need tree";
        return 0;
    }
}
// suffix structure