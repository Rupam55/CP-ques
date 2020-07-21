// Amusing Joke
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b,c;
    cin>>a>>b>>c;
    unordered_map<char,int>mp;
    for (int i = 0; i < c.length(); i++)
    {
        mp[c[i]]++;
    }
    bool flag = true;
    for (int i = 0; i < a.length(); i++)
    {
        mp[a[i]]--;
    }
    for (int i = 0; i < b.length(); i++)
    {
        mp[b[i]]--;
    }
    for(auto it : mp){
        // cout<<it.first<<" "<<it.second<<"\n";
        if(it.second!=0){
            flag=false;
        }
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}