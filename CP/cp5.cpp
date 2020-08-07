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
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        deque<int>q_1;
        deque<int>q_0;
        vector<int>ans(n);
        set<int>st;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == '0'){
                if(q_1.size()==0){
                    q_0.push_back(q_0.size());
                    ans[i] = q_0.back()+1;
                    st.insert(ans[i]);
                }else{
                    int current = q_1.back();
                    q_1.pop_back();
                    q_0.push_back(current);
                    ans[i]=current+1;
                    st.insert(ans[i]);
                }
            }else{
                if(q_0.size() == 0){
                    q_1.push_back(q_1.size());
                    ans[i] = q_1.back()+1;
                    st.insert(ans[i]);
                }else{
                    int current = q_0.back();
                    q_0.pop_back();
                    q_1.push_back(current);
                    ans[i]=current+1;
                    st.insert(ans[i]);
                }
            }
        }
        cout<<st.size()<<"\n";
        for (ll i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
// cf div3 661 q4
