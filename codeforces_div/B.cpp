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
typedef vector<int> vi;
typedef pair<int, int> pi;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

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
        vector<int> arr(n);
        fr(i, n)
        {
            cin >> arr[i];
        }
        vector<int> brr(n);
        vector<int> crr;
        fr(i, n)
        {
            cin >> brr[i];
            if(brr[i] == 0){
                crr.push_back(arr[i]);
            }
        }
        sort(crr.begin(),crr.end());
        int j =0;
        fr(i,n){
            if(brr[i] == 0){
                arr[i]= crr[j];
                j++;
            }
        }
        fr(i,n){
            cout<<arr[i]<<" ";
        }
        nl
    }
    return 0;
}
// dev_
