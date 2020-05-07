#include <bits/stdc++.h>
#include <cmath>
#include <string.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    int t,t1;
    cin>>t;t1=t;
    while(t--){
        int n,count_r=0,count_c=0,trace=0;
        cin>>n;
        int arr[n+1][n+1];
        for(int i=0;i<n;i++){
            int brr[n]={0};
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                brr[arr[i][j]-1]+=1;
            }
            for (int k = 0; k < n; k++){
                if(brr[k]!=1){
                    count_r+=1;
                    break;
                }
            }
            trace+=arr[i][i];
        }
        for (int i = 0; i < n; i++)
        {
            int brr[n] = {0};
            for (int j = 0; j < n; j++)
            {
                brr[arr[j][i] - 1] += 1;
            }
            for (int k = 0; k < n; k++)
            {
                if (brr[k] != 1)
                {
                    count_c += 1;
                    break;
                }
            }
        }
        cout<<"Case #"<<t1-t<<": "<<trace<<" "<<count_r << " " << count_c<<"\n";
    }
}