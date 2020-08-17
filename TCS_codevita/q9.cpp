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
            for (int j = i + 1; j < n-1; j++)
            {
                string s3="",s4="";
                s3 = s.substr(i + 1, j - i);
                s4 = s3;
                reverse(s4.begin(), s4.end());
                if (s3 == s4)
                {
                    string s5="",s6="";
                    s5 = s.substr(j + 1, n-1);
                    s6 = s5;
                    reverse(s6.begin(), s6.end());
                    if (s5 == s6)
                    {
                        cout<<s1<<"\n"<<s3<<"\n"<<s5;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"impossible";
    return 0;
}
    // dev_