#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int mini=INT_MAX,minix=0;
    for (int i = 0; i < k; i++)
    {
        int cal=0;
        // cout<<arr[i]<<" ";
        cal+=arr[i];
        for (int j = (i+k)%n; j != i ; j=(j+k)%n)
        {
            cal+=arr[j];
            // cout<<arr[j]<<" ";
        }
        // cout<<"\n";
        if(mini>cal){
            mini=cal;
            minix=i;
        }
    }
    cout<<minix+1;
}
// Dima and To-do List

