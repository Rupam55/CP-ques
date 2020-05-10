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

#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x) cerr << #x << " = " << (x) << '\n'
#define inf 1e14


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,n,m,a,count;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n%2==0){
            if(n/2>=m){
                cout<<"YES"<<"\n";
                m-=1;
                while(m--){
                    cout<<2<<" ";
                    n-=2;
                }cout<<n<<"\n";
            }else{
                
            }
        }
    }
}
// ques 2 date 9:5:2020