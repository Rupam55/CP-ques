#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum_min=0,sum_max=0;
    cin>>n>>m;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
        arr[i][2]=abs(arr[i][1]-arr[i][0]);
        sum_min+=abs(arr[i][0]);
        sum_max+=abs(arr[i][1]);        
    }
    if(sum_max<m){
        cout<<"NO";
    }else if(sum_min>m){
        cout<<"NO";
    }else{
        cout<<"YES"<<"\n";
        int ne=m-sum_min;
        for (int i = 0; i < n; i++)
        {
            if(ne>=arr[i][2]){
                cout<<arr[i][1]<<" ";
                ne-=arr[i][2];
            }else{
                cout<<arr[i][0]+ne<<" ";
                ne=0;
            }
        }
        
    }
    
}

// hackerrank  date 18 5 2020