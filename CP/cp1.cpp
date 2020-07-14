// C. Rotation Matching div2 648
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
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        a[x] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        b[x] = i;
    }
    vector<int> count(n, 0);
    int maxi=0;
    for (int i = 1; i <= n; i++)
    {
        int diff = a[i] - b[i];
        if (diff < 0)
        {
            diff += n;
        }
        ++count[diff];
        maxi = (maxi > count[diff]) ? maxi : count[diff];
    }

    cout << maxi;

    return 0;
}
