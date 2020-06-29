#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int b,n,m;
    cin>>b>>n>>m;
    vector<int>k(n);
    vector<int>u(m);
    for (int i = 0; i < n; i++)
    {
        cin>>k[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>u[i];
    }
    int max_spent = -1,t;
    for (int i = 0; i < k.size(); i++) {
        for (int j = 0; j < u.size(); j++) {
            t = k[i] + u[j];
            if (t > max_spent && t <= b) {
                max_spent = t;
            }
        }
    }
    cout<<max_spent;
}
// Electronics Shop #pue se pehle din