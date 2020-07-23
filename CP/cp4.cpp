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
    cin >> t;
    while(t--) {
        int n;
        string a,b;
        cin >> n >> a >> b;
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(a[i] != b[i]) {
                if(i > 0) ans.push_back(i + 1);
                ans.push_back(1);
                if(i > 0) ans.push_back(i + 1);
            }
        }
        cout << ans.size() << ' ';
        for(int x : ans) {
            cout << x << ' ';
        }
        cout << '\n';
    }
}