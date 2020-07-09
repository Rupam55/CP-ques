#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        ull val_a = bitset<64>(a).to_ullong();
        ull val_b = bitset<64>(b).to_ullong();
        ull val=val_a^val_b;
        string binary = bitset<64>(val).to_string();
        string ans=binary.substr(63-(a.length()-1),63);
        cout<<ans<<"\n";
    }
}