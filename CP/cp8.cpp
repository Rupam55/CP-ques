#include <bits/stdc++.h>
#include <cmath>
#include <string.h>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float n,m, ans = 0;
    cin >> n>>m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++)
    {
        if(v[i]<0){
            ans += abs(v[i]);
        }  
    }
    cout << ans;
    // Time();
}
// ques 29 date 29:5:2020