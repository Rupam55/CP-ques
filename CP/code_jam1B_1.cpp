#include <bits/stdc++.h>
#include <cmath>
#include <string.h>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;


#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x) cerr << #x << " = " << (x) << '\n'
#define inf 1e14

int l;

int check(int x,int y,int a,int b,int m){
    if(x==a&&y==b){
        cout << "Case #" << l + 1 << ": " << "yes" << "\n";
          
    }
    if(m>1024){
        return 0;
    }
       check(x, y, a, b + m, 2 * m);
        check(x, y, a, b - m, 2 * m);
        check(x, y, a + m, b, 2 * m);
        check(x, y, a - m, b, 2 * m);
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code start

    int n;
    cin>>n;
    for (l = 0; l < n; l++){
        int x,y;
        cin>>x>>y;
        check(x,y,0,0,1);
    }
    // code end
    Time();
}