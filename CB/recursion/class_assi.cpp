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
#define vs(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;

ll infi = (ll)1e15;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int k = 1; k <= t ; k++)
    {
        int n;
        cin>>n;
        int arr[n][2];
        arr[0][0] = 1;
        arr[0][1] = 1;
        for(int i =1; i< n; i++){
            arr[i][0] = arr[i-1][0] + arr[i-1][1];

            arr[i][1] = arr[i-1][0] ;
        }
        cout<<"#"<<k<<" : "<<arr[n-1][0]+arr[n-1][1]<<"\n";
    }
    return 0;
}

// dev