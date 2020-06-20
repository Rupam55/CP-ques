#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, s1 = "";
    cin >> s;
    bool flag = true;
    vector<string> v;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == '.' || i == s.length())
        {
            if (s1.length() != 0)
            {
                v.push_back(s1);
                s1 = "";
            }
            else
            {
                flag = false;
            }
        }
        else
        {
            s1 += s[i];
        }
    }
    if (v.size() < 2)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (i == 0)
            {
                if (v[i].size() > 8)
                {
                    flag = false;
                }
            }
            else
            {
                if (i != (v.size() - 1))
                {
                    v[i - 1] += '.';
                    if (v[i].size() > 1 && v[i].size() <= 8)
                    {
                        v[i - 1] += v[i][0];
                        v[i].erase(v[i].begin());
                    }
                    else if (v[i].size() > 8 && v[i].size() <= 11)
                    {
                        v[i - 1] += v[i][0];
                        v[i - 1] += v[i][1];
                        v[i - 1] += v[i][2];
                        v[i].erase(v[i].begin());
                        v[i].erase(v[i].begin());
                        v[i].erase(v[i].begin());
                    }
                    else
                    {
                        flag = false;
                    }
                }
                else
                {
                    if (v[i].size() >= 1 && v[i].size() <= 3)
                    {
                        v[i - 1] += '.';
                        v[i - 1] += v[i];
                        v.erase(v.end());
                    }
                    else
                    {
                        flag = false;
                    }
                }
            }
        }
        if (flag)
        {
            cout << "YES"
                 << "\n";
            for (size_t i = 0; i < v.size(); i++)
            {
                cout << v[i] << "\n";
            }
        }
        else
        {
            cout << "NO";
        }
    }
}
