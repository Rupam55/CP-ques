#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,number=0;
    cin>>n>>m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]=='W'){
                if (arr[i][j-1] == 'P' || arr[i-1][j] == 'P' || arr[i][j+1] == 'P' || arr[i+1][j] == 'P'){
                    number++;
                }
            }
        }
    }
    cout<<number;
}

// hackerrank  date 18 5 2020