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

    string s;
    cin >> s;
    int n = s.length();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if ((i >= 2 && ch == ans[j - 1] && ans[j - 1] == ans[j - 2]) || (i >= 3 && ch == ans[j - 1] && ans[j - 2] == ans[j - 3]))
            continue;
        else
        {
            ans[j] = s[i];
            j++;
        }
    }
    cout<<ans;
}