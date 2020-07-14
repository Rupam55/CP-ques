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
        int n,k;
        cin>>n>>k;
        vector<int>arr;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
            arr.push_back(a);
            st.insert(a);
        }
        if(k<st.size()){
            cout<<-1;
        }else{
            cout<<n*k<<"\n";
        for (int i = 0; i < n; i++)
        {
            for(auto it:st){
                cout<<it<<" ";
            }
            for (int j = 0; j < k- st.size() ; j++)
            {
                cout<<1<<" ";
            }
        }
        }
        cout<<"\n";
    }
}

// phoenix and beauty