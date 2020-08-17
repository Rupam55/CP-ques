#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<vector<char>>arr(n,vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < m; j++)
            {
                if(arr[i][j] == '.'){
                    int p;
                    count++;
                    if(count % 2 == 1){
                        p = x;
                    }else{
                        p = y - x;
                    }
                    ans = min(ans + x ,ans + p);
                }else{
                    count=0;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
// cf div3 661 q1
