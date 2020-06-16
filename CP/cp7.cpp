#include <bits/stdc++.h>
using namespace std;

int arr[100000][100000];

int ans(int n,int c){
    int max=INT_MIN,path;
    for (int i = 0; i < n; i++)
    {
        
    }
    

}

int main()
{
    int n,c;
    int a,b;
    cin>>n>>c;
    int brr[n][2];
    for (int i = 1; i < n-1; i++)
    {
        cin>>a>>b;
        arr[a][b]=1; 
    }
    cout<<ans(n,c);    
}

