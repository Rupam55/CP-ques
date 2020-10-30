#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<ll> vi;
typedef pair<ll, ll> pl;
typedef pair<ll, ll> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<ll>())
#define vs(v) sort(v.begin(), v.end())
#define nl cout << endl;
#define F first
#define S second
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
// clear input stream berore it
// cin.ignore(numeric_limits<streamsize>::max(),'\n');
// getline(cin, str);

ll inf = 1e18;
ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin>>n>>m;
    ll num = 1,res = 0,i = 1, ans = 0, dup = n, dup_2 =n;
    while(n>0){

        num = n % 10;
        n = n/10;
        res = res + i*num;

        if(res+1 <= m){
            ans = res+1;
        }

        i*=10;  
    }

    ll f_num = abs(dup - ans);
    ll n_9_1 =0, n_9_2 =0;

    while(dup_2 > 0){
        ll a = dup_2%10;
        dup_2 /= 10;
        if(a == 9){
            n_9_1++;
        }else{
            break;
        }
    }
    while(f_num > 0){
        ll a = f_num%10;
        f_num /= 10;
        if(a == 9){
            n_9_2++;
        }else{
            break;
        }
    }
    // cout<<n_9_1<<" "<<n_9_2;
    if(n_9_2 > n_9_1){
        cout<<abs(dup - ans);
    }else if(n_9_1 == n_9_2){
        cout<<dup;
    }else{
        cout<<dup;
    }
    return 0;
}