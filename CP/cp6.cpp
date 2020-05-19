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
    int n,a;
    cin>>n;
    unordered_map<string, int> mp;
    while(n--){
        cin>>a;
        if(a==1){
            string s;
            int b;
            cin>>s;
            cin>>b;
            mp[s]+=b;
        }else if(a==2){
            string s;
            cin>>s;
            mp.erase(s);
        }else{
            string s;
            cin>>s;
            cout<<mp[s]<<"\n";
        }
        
    }   
}