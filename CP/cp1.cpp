#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main()
{
    int n,m,a;
    cin>>n>>m;
    vector<int>v;
    bool flag=true;
    for (int i = 0; i < m; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(m>0){
        if(v.front()==1|| v.back()==n){
        flag=false;
    }else{
        for (int i = 2; i < m; i++)
        {
            if(v[i]==v[i-1]+1 && v[i] == v[i-2]+2){
                flag=false;
            }
        }
    }
    }
    if(flag==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
//ladder ques 21