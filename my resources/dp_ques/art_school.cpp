#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int arr[n][m],brr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
            brr[i][j]=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            brr[i][0]=arr[0][0];
        }else{
            brr[i][0]=brr[i-1][0]+arr[i][0];
        }
    }
    for (int i = 1; i < m; i++)
    {
        brr[0][i]=brr[0][i-1]+arr[0][i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            brr[i][j]=max((brr[i-1][j]+arr[i][j]),(brr[i][j-1]+arr[i][j]));
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<brr[i][m-1]<<" ";
    }
}
// art union


