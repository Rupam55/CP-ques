#include <bits/stdc++.h>

using namespace std;

void findmin(int brr[][3],int n){
    int min=INT_MAX;
    int index;
    for(int i=0;i<n;i++){
        if(brr[i][1]<min){
            min=brr[i][1];
            index=brr[i][0];
        }
    }
    for(int i=0;i<n;i++){
        if(brr[i][1]==min){
            brr[i][0]=0;
        }
    }
}

int main()
{
    int n,m;
    bool flag=true;
    cin>>n>>m;
    int arr[m];
    int brr[n][3];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        brr[i][0]=0;
        brr[i][2]=0;
    }
    for(int i=0;i<m;i++){
        flag=false;
        for(int j=0;j<n&&flag==false;j++){
            if(brr[j][0]==0){
                brr[j][0]=1;
                brr[j][1]=arr[i];
                flag=true;
                cout << j << " " << brr[j][2] << "\n";
                brr[j][2] += arr[i];
            }
        }
        if(flag==false){
            findmin(brr, n);
            for(int j=0;j<n&&flag==false;j++){
                if(brr[j][0]==0){
                    brr[j][0]=1;
                    brr[j][1]=arr[i];
                    flag=true;
                    cout << j << " " << brr[j][2]<< "\n";
                    brr[j][2] += arr[i];
                }
            } 
        }
    }
}