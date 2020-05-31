#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float n,area,ans=0;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        area = 3.1415926536 * v[i] * v[i];
        if(i%2==0){
            ans+=area;
        }else{
            ans-=area;
        }
    }
    cout<<ans;
    // Time();
}