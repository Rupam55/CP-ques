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
    
    int n,a;
    cin>>n;
    vector <int> v;
    while(n--){
        cin>>a;
        int count=0,mul=1;
        v.clear();
        while(a>0){
            int x,i;
            x=a%10;
            if(x!=0){
                count++;
                i= x*mul;
                v.push_back(i);
            }
            mul*=10;
            a=a/10;
        }
        cout<<count<<"\n";
        for(auto j:v){
            cout<<j<<" ";
        }
        cout<<"\n";
    }   
}

// date 9-5-2020