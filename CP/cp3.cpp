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
    vector<int>a;
    vector<int>b;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin>>c;
        a.push_back(c);
    }
    for (int i = 0; i < n; i++)
    {
        int c;
        cin>>c;
        b.push_back(c);
    }
    a.insert(a.end(), b.begin(), b.end());
    sort(a.begin(),a.end());
    cout<<a[(2*n)/2-1];
    
}

