// simple string
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull t;
    cin >> t;
    for (ull cas = 0; cas < t; cas++)
    {
        ull n,m;
        cin>>n>>m;
        vector<ull>arr(n);
        vector<ull>mini(n,LONG_LONG_MAX);
        for (ull i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (ull i = 0; i <= m; i++)
        {
            mini[i]=0;
        }
        bool flag = true;
        for (ull i = 0; i < n; i++)
        {
            int k=0;
            for (ull j = i-1 ; j >= i-m && j>=0 ; j--)
            {
                if(arr[j]!=0){
                    mini[i]=min( mini[i], mini[j]+arr[j]);
                }else{ 
                    if(j>=m){
                        k++;
                    }
                }
            }
            if(k==m){
                flag=false;
            }
        }
        if(flag){
            cout<<"Case #"<<cas+1<<": "<<mini[n-1]<<"\n";
        }else{
            cout<<"Case #"<<cas+1<<": "<<-1<<"\n";
        }
    }
}
