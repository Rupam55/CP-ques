#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

vector<pair<char, pair<int, int>>> vect;
int r = 1;

void create(string s)
{
    int l = 0;
    if (vect.size() == 0)
    {
        vect.push_back({s[0], {l, r}});
        // cout<<1;
        l++;
        r++;
    }
    else
    {
        if (vect[0].first == s[0] && vect[0].second.first == 0)
        {
            l++;
        }
        else
        {
            vect.push_back({s[0], {l, r}});
            // cout<<1;
            l=r;r++;
        }
    }
    for (int i = 1; i < s.length(); i++)
    {
        bool flag = false;
        for (int j = 0; j < vect.size(); j++)
        {
            if (vect[j].first == s[i] && vect[j].second.first == l)
            {
                flag = true;
            }
        }
        if (flag)
        {
            l++;
        }
        else
        {
            // cout<<2;
            vect.push_back({s[i], {l, r}});
            l++;
            r++;
        }
    }
}

void print()
{
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i].second.first << "->" << vect[i].second.second << ":" << vect[i].first  << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        create(s);
    }
    print();
}