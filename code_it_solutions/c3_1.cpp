#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
    cin>>n;
    set<int> st;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        st.insert(a);
    }
    cout<<st.size();
    return 0;
}