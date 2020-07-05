#include <bits/stdc++.h>

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
    vector<pair<int,int>> a;     
    for (int i = 0; i < n; i++)
    {
        int b;
        cin>>b;
        a.push_back({b,i+1});
    }
    sort(a.rbegin(),a.rend());
    for (int i = 0; i < k; i++)
    {
        cout<<a[i].second<<" ";
    }
}

