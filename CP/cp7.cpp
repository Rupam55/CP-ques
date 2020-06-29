#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int sum=0,count=0,n;
        string s;
        cin>>n>>s;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='('){
                if(sum<0){
                    sum=0;
                    sum++;
                }else{
                    sum++;
                }
            }else{
                sum--;
                if(sum<0){
                count++;
                }
            }
        }
        cout<<count<<"\n";
    }   
}