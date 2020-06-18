#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    vector<int>v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    int sum2=0,count=0;
    for (size_t i = 0; i < n-1; i++)
    {
        sum2+=v[i];
        sum-=v[i];
        if(sum==sum2){
            count++;
            // cout<<sum<<" "<<sum2<<" "<<i<<"\n";
        }
    }
    cout<<count;
}