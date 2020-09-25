#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vs(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;

ll infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ld n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> brr(n, 0);

    stack<pair<int,int>> st;

    int i = 0;
    while (i < n)
    {
        if (st.empty() || arr[i] <= st.top().first)
        {
            st.push({arr[i],i});
            i++;
        }
        else
        {
            while (!st.empty() && st.top().first < arr[i])
            {
                brr[st.top().second]=i-st.top().second;
                st.pop();
            }
        }
    } 
    for (int i = 0; i < n; i++)
    {
        cout << brr[i] << " ";
    }
    return 0;
}