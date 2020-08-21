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

    int n, k1, k2, a;
    deque<int> dq1;
    deque<int> dq2;
    cin>>n>>k1;
    fr(i,k1){
        cin>>a;
        dq1.push_front(a);
    }

    cin>>k2;
    fr(i,k2){
        cin>>a;
        dq2.push_front(a);
    }
    int count =0 ;
    while( !dq1.empty() && !dq2.empty()){
        int x = dq1.back();
        dq1.pop_back();
        int y = dq2.back();
        dq2.pop_back();

        if(x>y){
            dq1.push_front(y);
            dq1.push_front(x);
        }else if(y>x){
            dq2.push_front(x);
            dq2.push_front(y);
        }
        count++;
        if(count == 3628800){
            cout<<-1;
            return 0;
        }
    }
    cout<<count;
    nl
    if(dq1.empty()){
        cout<<2;
    }else{
        cout<<1;
    }
    return 0;
}
// dev
