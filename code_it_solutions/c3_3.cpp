#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,m;
    cin>>n>>m;
    map<int,int> mp;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        mp[a]++;
    }
    int count = 0;
    for(auto it: mp){
        count += it.second/2;
    }

    if(n < (m*m)){
        cout<<"NO";
    }
    else if(m == 1){
        cout<<"YES";
    }
    else{
        int req = m*m;
        req -= m;
        req /= 2;
        cout<<req<<" "<<count;
        if(count >= req ){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    return 0;
}