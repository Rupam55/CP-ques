#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

void bubbleSort(ll arr[][4], ll n) 
{ 
   ll i, j,temp; 
   bool swapped; 
   for (i = 0; i < n-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j][1] > arr[j+1][1]) 
        { 
           temp=arr[j][1];
           arr[j][1]=arr[j+1][1];
           arr[j+1][1]=temp; 
           swapped = true; 
        } 
     } 
     if (swapped == false) 
        break; 
   } 
} 

int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll arr[a][2];
    ll brr[b][4];
    ll crr[b][3];
    for(int i=0;i<a;i++){
        cin>>arr[i][0];
        arr[i][1]=0;
    }
    for(int i=0;i<b;i++){
        cin>>brr[i][0]>>brr[i][1]>>brr[i][2];
        brr[i][3]=i;
        for(int j=0 ; j<brr[i][0] ; j++){
            cin>>crr[i][j];
        }
    }
    bubbleSort(brr,b);
    int count=0;
    for(int i=0;i<b;i++){
        c=c-brr[i][1];
        if(c>0){
            count++;
        }
    }
    cout<<count<<"\n";
    for(int i=0;i<b;i++){
        int temp=0;
        ll drr[10000];
        for(int j=0;j<brr[i][0];j++){
            if(arr[crr[i][j]][1]==0){
                drr[temp]=crr[i][j];
                temp++;
                arr[crr[i][j]][1]=1;
            }
        }
        cout<<brr[i][3]<<" "<<temp<<"\n";
        for(int i=0;i<temp;i++){
            cout<<drr[i]<<" ";
        }cout<<"\n";
    }

}