#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long int t;
   cin>>t;
   while(t--){
       long long int a;
       cin>>a;
        if(a%2!=0){
           cout<<a/2<<"\n";
       }else{
           while(a%2 == 0){
               a=a/2;
           }
            cout<<a/2<<"\n";
       }
   }
   
}