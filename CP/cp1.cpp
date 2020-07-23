// Misha and Changing Handles
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
    cin >> t;
    while (t--)
    {
        ll n1, n2;
        cin >> n1>> n2;
        vector<ll> arr(n1);
        vector<ll> brr(n2);
        for (ll i = 0; i < n1; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n2; i++)
        {
            cin >> brr[i];
        }
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());
        ll i = 0, j = 0;
        vector<ll>com;
        bool flag=true;
        while (i < arr.size() && j < brr.size() && flag)
        {
            if(arr[i]==brr[j]){
                com.push_back(arr[i]);
                i++;j++;
                flag=false;
            }else if(arr[i]<brr[j]){
                i++;
            }else{
                j++;
            }
        }
        if(com.size()>0){
            cout<<"YES"<<"\n";
            cout<<com.size()<<" "<<com[0]<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}
