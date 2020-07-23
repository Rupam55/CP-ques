// candies
#include <bits/stdc++.h>

using namespace std;

int infi = 10000;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        vector<int> ans;
        vector<int> ansb;
        cin >> a >> b;
        a += '0'; b += '0';
        for (int i = 1; i <= n; i++)
        {
            if(a[i] != a[i - 1]) ans.push_back(i);
            if(b[i] != b[i - 1]) ansb.push_back(i);
        }
        cout << ans.size()+ansb.size() << " ";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        for (int i = ansb.size() - 1; i >= 0; i--)
        {
            cout << ansb[i] << " ";
        }
        cout << "\n";
    }
}
