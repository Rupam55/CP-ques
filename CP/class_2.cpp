#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main()
{
     ll arr[100]={0};
     ll n,sum=0,count_even=0,count_odd=0,sum_even=0,sum_odd=0;
     cout<<"enter elements";
     cin>>n;
     for(int i=0;i<n;i++){
          cin>>arr[i];
          sum=sum+arr[i];
          if(arr[i]%2==0){
               count_even++;
               sum_even=sum_even+arr[i];
          }else{
               count_odd++;
               sum_odd=sum_odd+arr[i];
          }
     }
     cout<<"sum is"<<sum<<"\n";
     cout<<"count of even is"<<count_even<<"\n";
     cout<<"count of odd is"<<count_odd<<"\n";
     cout<<"sum of even is"<<sum_even<<"\n";
     cout<<"sum of odd is"<<sum_odd<<"\n";
     
}