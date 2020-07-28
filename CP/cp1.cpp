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
    for(int i=0;i<t;i++)
    {
        ll n,num_a=0,num_b=0;
        string s;
        cin >> n;
        cin>>s;
        for (ll j = 0; j < s.length(); j++)
        {
            if(s[j]=='A') num_a++;
            else num_b++;
        }
        if(num_a==n/2 || num_b==n/2){
            cout<<"Case #"<<i+1<<": Y"<<"\n";
        }else{
            cout<<"Case #"<<i+1<<": N"<<"\n";
        }
        
    }
    return 0;
}
