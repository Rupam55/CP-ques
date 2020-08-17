#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string s;
    cin >> s;
    int n = s.length();

    string s1 = "", s2 = "";
    for (int i = 0; i < n; i++)
    {
        s1 = s.substr(0, i+1);
        s2 = s1;
        reverse(s2.begin(), s2.end());
        if (s1 == s2)
        {
            cout<<"f";
        }
    }
    return 0;
}
// dev_