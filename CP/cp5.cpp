#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

bool comp(string a, string b)
{
    return a.size() < b.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string str;
    vector<string> v;

    for (int i = 1; i <= n; i++)
    {
        cin >> str;
        v.push_back(str);
    }

    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1].find(v[i]) == string::npos)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    for (auto j : v)
        cout << j << endl;
}
