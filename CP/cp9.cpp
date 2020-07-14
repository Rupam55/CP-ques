#include <bits/stdc++.h>

using namespace std;
void left(vector<int> &v)
{
    for (int i = 0; i < 10; i++)
    {
        if (v[i] == 0)
        {
            v[i] = 1;
            break;
        }
    }
}
void right(vector<int> &v)
{
    for (int i = 9; i >= 0; i--)
    {
        if (v[i] == 0)
        {
            v[i] = 1;
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(10, 0);
    for (int k = 0; k < s.length(); k++)
    {
        if (s[k] == 'L')
        {
            left(v);
        }
        else if (s[k] == 'R')
        {
            right(v);
        }
        else
        {
            int pos = int(s[k]) - 48;
            v[pos] = 0;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << v[i];
    }
}
// A. Hotelier
