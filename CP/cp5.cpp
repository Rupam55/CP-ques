#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (int i = 0; i < n; i++)
#define fr1(i, n) for (int i = 1; i <= n; i++)
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

int infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m,0));

        fr(i,n)
            fr(j,m)
                cin>>arr[i][j];
        int count = 0;

        fr(i, n){
            fr(j, m){
                bool flag1 = true, flag2 = true;

                fr(k,m){
                    if(arr[i][k] == 1){
                        flag1 = false;
                    }
                }
                fr(k,n){
                    if(arr[k][j] == 1){
                        flag2 = false;
                    }
                }

                if(flag1 && flag2){
                    arr[i][j]=1;
                    count++;
                }
            }
        }
        if(count & 1){
            cout<<"Ashish";
            nl
        }else{
            cout<<"Vivek";
            nl
        }
    }
    return 0;
}
