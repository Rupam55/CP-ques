#include <bits/stdc++.h>
#include <cmath>
#include <string.h>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define F first
#define S second
typedef vector<int> vi;
typedef pair<int, int> pi;
#define pob pop_back
#define pb push_back

#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x) cerr << #x << " = " << (x) << '\n'
#define inf 1e14

#define invec(v)     \
    for (auto x : v) \
        cin >> x;
template <typename T, typename L>
bool mycomp(T x, L y)
{
    return x > y;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll  t;
    cin>>t;
    while(t--){
        ll n,m;
        ll i, j, k;
        cin>>m>>n;
        if(m%2==0 && m!=1 && m!=2){
            i=m/2;
            if(n%i==0){
                j=n/i;
                k=n/i;
                if(((m-2)*j+k)<((m-4)*j+(2*(2*k)))){
                cout<<(m-4)*j+2*2*k<<"\n";
                }else{
                cout<<(m-2)*j+k<<"\n";
                }
            }else{
                j=n/i;
                k=j+n%i;
            }    
        }else if(m%2!=0 && m!=1 && m!=2){
            i=(m-1)/2;
            if(n%i==0){
                j=n/i;
            }else{
                j=n/i;
                k=j+n%i;
            }
            cout << (m - 3) * j + (2*k)<<"\n";
        }else if(m==1){
            cout<<0<<"\n";
        }else if(m==2){
            cout<<n<<"\n";
        } 
    }
}

// date 14-5-2020