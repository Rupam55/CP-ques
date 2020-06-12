#include <bits/stdc++.h>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
    int n,k,a=0,sum=0;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if(a>k){
            sum+=(a-k);
        }
    }
    cout<<sum<<"\n";
}
}

// code chef long june q1
