// Amusing Joke
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

char ans[100000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> ans;

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].first;
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end());
    for (int i = 0; i < n; i++)
    {
        if (m < arr[i].first)
            break;
        ans.push_back(arr[i].second + 1);
        m -= arr[i].first;
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" "; 
    }

    return 0;
}