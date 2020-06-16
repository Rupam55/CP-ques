#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    string s1,s2,s3;
    cin>>s1>>s2;
    unordered_map<string, int> mp;
    unordered_map<string, int> bp;
    while(t--){
        cin>>s3;
        for (int i = 0; i < s1.length(); i++)
        {
            string a="";
            a+=s1[i];
            a+=s1[i+1];
            mp[a]++;
            if(i<s2.length()){
                string a="";
                a+=s2[i];
                a+=s2[i+1];
                bp[a]++;
            }
        }
        
        if(mp[s3]==bp[s3]){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}
