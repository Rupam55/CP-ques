#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, i = 0, a, size=0;
    cin >> n >> k;
    deque<int> dq;
    map<int, int> mp;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (mp[a] == 0)
        {
            if (size == k)
            {
                mp[a] = 1;
                mp[dq.front()] = 0;
                dq.push_back(a);
                dq.pop_front();
            }else{
                mp[a] = 1;
                dq.push_back(a);
                size++;
            }
        }
    }
    cout << size << "\n";
    for (auto it = dq.rbegin(); it != dq.rend(); it++)
    {
        cout << *it << " ";
    }
}
// d_drago
// B2. Social Network (hard version) 590
