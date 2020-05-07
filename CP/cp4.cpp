#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a;
   cin>>a;
   while(a--){
       int n;
       cin>>n;
       int arr[n][2];
       for (int i = 0; i < n; i++){
           cin>>arr[i][0];
       }
       for (int i = 0; i < n; i++)
       {
           cin >> arr[i][1];
       }
       int m=1,total=0;
       for (int i = 0; i < n; i++)
       {
           if(arr[i][0]<=arr[i+1][0]){
               m++;
           }else{
               total+=m*(m+1)/2;
               m=1;
           }
       }m=m-1;
       total+=m*(m+1)/2;
       for (int i = 0; i < n; i++)
       {
           if(arr[i][1]==1){
               int m=1;
               for (int j = i+1; j <n; j++)
               {
                   if (arr[j-1][0] < arr[j][0])
                   {
                       m++;
                   }
                   else
                   {
                       break;
                   }
               }
               total -= (m);
           }
       }
       cout<<total<<"\n";
   }
}