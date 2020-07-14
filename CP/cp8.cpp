#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n,m,sum=0;
        cin>>n>>m;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        int len_l=0,len_r=0,i=0;
        while(v[i]%m==0 && i<n){
            i++;
            len_l++;
        }
        i=n-1;
        while(v[i]%m==0 && i>=0){
            i--;
            len_r++;
        }
        len_l+=1;len_r+=1;
        if(sum%m!=0){
            cout<<n<<"\n";
        }else{
            int ans = n-min(len_l,len_r);
                cout<<ans<<"\n";
        }   
    }
}
// A. XXXXX