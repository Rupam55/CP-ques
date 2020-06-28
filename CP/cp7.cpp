#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, t;
    cin>>n>>s>>t;
    vector<int>v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    int count=0;
    while(s!=t && v[s]!=0){
        int t=s;
        s=v[s];
        v[t]=0;
        count++;
    }if(s==t){
    cout<<count;}
    else{
        cout<<-1;
    }    
}
// marbel wala ques