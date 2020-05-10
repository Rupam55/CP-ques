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

    int n,i,j,k,l;
    cin>>n;
    while(n--){
        cin>>i>>j;
        if(j<i){
            cout<<j<<"\n";
        }else{
            if (j % (i - 1) != 0){
                k = j / (i - 1) + 1;
                l = j % (i - 1);
                cout<< (k-1) * (i) + l << "\n";
            }else{
                k = j / (i - 1);
                l = j % (i - 1);
                cout << k * (i - 1) + (k - 1) * 1 + l << "\n";
            }
        }
    }
}