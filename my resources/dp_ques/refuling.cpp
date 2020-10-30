#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<int>())
#define vs(v) sort(v.begin(), v.end())
#define nl cout << endl;
#define F first
#define S second
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
// clear input stream berore it
// cin.ignore(numeric_limits<streamsize>::max(),'\n');
// getline(cin, str); 

ll inf = 1e18;
ll mod = 1e9 + 7 ;
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> arr(n);
    fr(i,n){
        cin>>arr[i];
    }

    int current_val = 0;
    int height_val = arr[0];
    int count=0;
    int i = 0;
    for(i=0; i<n && current_val >= 0; i++){
        if(current_val == 0 && i != n-1){
            count++;
            if(arr[i] > height_val){
                current_val = arr[i];
                height_val = arr[i];
            }else{
                current_val = height_val;
            }
            current_val --;
            height_val--;
        }else{
            if(arr[i] > height_val){
                height_val = arr[i];
            }
            current_val --;
            height_val--;
        }
    }

    if(i == n){
        cout<<count;
    }else{
        cout<<"NOT POSSIBLE";
    }
    return 0;
}