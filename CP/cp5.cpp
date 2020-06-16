#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   ll a;
   cin>>a;
   bool flag=true;
   while(a!=1){
       if(a%7==0){
           a=a/7;
       }else if(a%5==0){
           a=a/5;
       }else if(a%3==0){
           a=a/3;
       }else if(a%2==0){
           a=a/2;
       }else{
           flag=false;
           break;
       }
   }
   if(flag){
       cout<<"YES";
   }else{
       cout<<"NO";
   }
}