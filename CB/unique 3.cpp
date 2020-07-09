#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int max = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,no;
    cin>>n;
    vector<int>v(10,0);
    for (int i = 0; i < n; i++)
    {
        cin>>no;
        int j=0;
        while(no>0){
            int lb=no&1;
            v[j]+=lb;
            j++;
            no>>=1;
        }
    }
    int p=1;
    int ans=0;
    for (int i = 0; i < 10; i++)
    {
        v[i]%=3;
        ans+=v[i]*p;
        p*=2;
    }
    cout<<ans;
}