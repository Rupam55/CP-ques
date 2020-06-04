#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    int n,a=0,g=0,at=0,gt=0;
    string s="";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>g;
        if(abs((at+a)-gt)<=abs((gt+g)-at)){
            s+='A';
            at+=a;
        }else{
            s += 'G';
            gt += g;
        }
    }
    if(abs(at-gt)<=500){
        cout<<s;
    }else{
        cout<<"-1";
    }  
}
//ladder ques 33