// A. Oh Those Palindromes
#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a, start = 0, end = 0, mid = 0;
        vector<ll> arr;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            if (a > 0)
            {
                arr.push_back(a);
            }
        }
        int i = 0, j = (arr.size() - 1);
        while (i < arr.size()-1 && arr[i] == 1)
        {
            start++;
            i++;
        }
        while (j >= i && arr[j] == 1)
        {
            end++;
            j--;
        }
        for (int k = i; k <= j; k++)
        {
            if (arr[k] == 1)
            {
                mid++;
            }
            if (k == (arr.size() - 1))
            {
                end++;
            }
        }
        // cout << start << " " << mid << " " << end<< "\n";
        if (arr.size() == 1)
        {
            cout<<"First"<<"\n";
        }
        else
        {
            if (start % 2 == 1)
            {
                if (end % 2 == 1)
                {
                    cout << "Second"
                         << "\n";
                }
                else
                {
                    if (mid % 2 == 1)
                    {
                        cout << "Second"
                             << "\n";
                    }
                    else
                    {
                        cout << "Second"
                             << "\n";
                    }
                }
            }
            else
            {
                if (end % 2 == 1)
                {
                    cout << "First"
                         << "\n";
                }
                else
                {
                    if (mid % 2 == 1)
                    {
                        cout << "First"
                             << "\n";
                    }
                    else
                    {
                        cout << "First"
                             << "\n";
                    }
                }
            }
        }
    }
    return 0;
}