#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int temp = min(a, b);
        int temp2 = max(a, b);
        a = temp;
        b = temp2;
        if (c <= b)
        {
            if (b % a == 0)
            {
                if (c % a == 0 && c >= a)
                {
                    cout << "YES1" << b << " " << a << endl;
                }
                else
                {
                    cout << "NO" << b << " " << a << endl;
                }
            }
            else
            {
                cout << "YES1" << b << " " << a << endl;
            }
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}