// mock vita q1
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n;
    m=n;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < n; i++)
    {
        string c = "";
        bool flag = false;
        for (int j = 0; j < m; j++)
        {
            if (b[j] == a[i])
            {
                b.erase(0, j + 1);
                b += c;
                // cout << b << "\n";
                flag = true;
                m--;
                break;
            }
            // cout<<a[i]<<" "<<b[j]<<"\n";
            else
            {
                c += b[j];
            }
        }
        if (flag == false)
        {
            break;
        }
    }
    cout << b.length();
}
