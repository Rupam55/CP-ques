#include <bits/stdc++.h>
#include <cmath>
#include <string.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    int t, t1;
    cin >> t;
    t1 = t;
    while (t--)
    {
        string s, s1, s2;
        cin >> s;
        s1.append("0");
        s1 += s;
        s1.append("0");
        s = s1;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] < s[i + 1])
            {
                for (int j = 0; j < (s[i + 1] - s[i]); j++)
                {
                    s2.append("(");
                }
            }
            else
            {
                for (int j = 0; j < (s[i] - s[i + 1]); j++)
                {
                    s2.append(")");
                }
            }
            if (i < s.length() - 2)
            {
                s2 += s[i + 1];
            }
        }

        cout << "Case #" << t1 - t << ": " << s2 << "\n";
    }
}