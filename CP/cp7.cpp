// mock  vita q2
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int num,a,b,c,mini,maxi;
    cin>>n;
    vector<int>arr(n);
    vector<int>brr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        num=arr[i];
        a=num%10;
        num=num/10;
        b=num%10;
        num=num/10;
        c=num%10;
        num=num/10;
        mini=min(a,b);
        mini=min(mini,c);
        maxi=max(a,b);
        maxi=max(maxi,c);
        brr[i]=(maxi*11+mini*7)%100;
    }
    unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;
    for (int i = 0; i < n; i++)
    {
        if(i&1){
            mp1[brr[i]/10]++;
        }else{
            mp2[brr[i]/10]++;
        }   
    }
    unordered_map<int,int>mp3;
    for(auto it:mp1){
        if(it.second>1){
            if(it.second==2){
            mp3[it.first]=max(mp3[it.first],1);
            }
            else{
            mp3[it.first]=max(mp3[it.first],2);
            }
        }
        // cout<<it.first<<" "<<it.second<<"\n";
    }
    for(auto it:mp2){
        if(it.second>1){
            if(it.second==2){
                mp3[it.first]=max(mp3[it.first],1);
            }
            else{
                mp3[it.first]=max(mp3[it.first],2);
            }
        }
        // cout<<it.first<<" "<<it.second<<"\n";
    }
    int ans=0;
    for (auto it:mp3)
    {
        ans+=it.second;
    }
    cout<<ans;
    
}