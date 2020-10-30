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
    int max_tom = 0;
    map<int,int> mp_tom;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        mp_tom[a]+=a;
    }
    for(auto it:mp_tom){
        max_tom = max(it.second,max_tom);
    }

    int max_jerry = 0;
    map<int,int> mp_jerry;
    for(int i=0; i<m; i++){
        int a;
        cin>>a;
        mp_jerry[a]+=a;
    }
    for(auto it:mp_jerry){
        max_jerry = max(it.second,max_jerry);
    }

    if(max_tom == max_jerry){
        cout<<"DRAW";
    }else if(max_tom > max_jerry){
        cout<<"TOM";
    }else{
        cout<<"JERRY";
    }
    return 0;
}