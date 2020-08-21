#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<ll> vi;
typedef pair<int, int> pi;

int infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        int x1, y1, n;
        cin >> x1 >> y1 >> n;
        while (n--)
        {
            int x2, y2;
            cin >> x2 >> y2;

            int dist_x = x2 - x1, dist_y = y2 - y1;
            
            bool flag = true;

            if(dist_x > 0){
                if(mp['R'] < abs(dist_x)){
                    flag = false;
                }
            }else{
                if(mp['L'] < abs(dist_x)){
                    flag = false;
                }
            }

            if(dist_y > 0){
                if(mp['U'] < abs(dist_y)){
                    flag = false;
                }
            }else{
                if(mp['D'] < abs(dist_y)){
                    flag = false;
                }
            }

            if(flag){
                cout<<"YES "<<abs(dist_x)+abs(dist_y)<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}