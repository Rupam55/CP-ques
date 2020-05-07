#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main()
{
     cout<<"my name is rupam"<<"\n";
     for(int i=0;i<10;i++){
         if(i==0||i==4){
             for(int j=0;j<6;j++){
                 cout<<"*";
             }cout<<"\n";
         }else if(i<4){
             cout<<"*";
             for(int j=1;j<5;j++){
                 cout<<" ";
             }cout<<"*";
             cout<<"\n";
         }else{
                 cout<<"*";
                     for(int k=0;k<i-5;k++){
                         cout<<" ";
                     }cout<<"*";
                cout<<"\n";
         }
     }
}