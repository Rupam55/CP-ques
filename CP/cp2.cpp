#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,q;
    cin>>n>>k>>q;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    k %= n;
    for (int i = 0; i < q; i++)
    {
        int a;
        cin>>a;
        cout<<v[(n-k+a)%n]<<"\n";
    }
}
// Dima and To-do List

