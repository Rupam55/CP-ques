#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int d,m;
    cin>>d>>m;
    int count=0;
    for (int i = 0; i < n-m+1; i++)
    {
        int sum=0;
        for (int j = i; j < i+m; j++)
        {
            sum+=v[j];
        }
        if(sum==d){
            count++;
        }
    }
    cout<<count;
        
}
