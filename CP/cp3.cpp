#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,a,mini=0,maxi=0;
        cin>>n>>a;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin>>b;
            if(b<=0){
                mini++;
            }else{
                maxi++;
            }
        }
        if(mini>=a){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
        }
    }
}

// Picking Numbers
