#include <bits/stdc++.h>
#include <math.h>
#include <sstream>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ll> vll;

#define DEBUG //cmt out if dont wanna change code

#define F first
#define S second
#define pob pop_back
#define pb push_back
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x) cerr << #x << " = " << (x) << '\n'
#define FASTER                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define invec(v)      \
    for (auto &x : v) \
        cin >> x;
#define Test  \
    int T;    \
    cin >> T; \
    while (T--)
#define REP(i, j, k) for (int i = (j); (i) < (k); (i)++)
//#define phi ((1+sqrt(5))/2)
#define endl '\n'

#ifdef DEBUG
template <class c>
function<void(c V)> debug = [](c V) {
    cout << "\n#vector values : ";
    for (auto x : V)
        cout << x << " ";
};
template <class c>
function<void(c V)> debug2d = [](c V) {
    cout << "\n#2D MAT : \n";
    for (auto x : V)
    {
        for (auto q : x)
            cout << q << " ";
        cout << endl;
    }
};
template <class c>
function<void(c V)> debugp = [](c V) {
    cout << "\n#pairs : \n ";
    for (auto x : V)
    {
        cout << "{" << x.first << " : " << x.second << "} ";
        //cout<<endl;
    }
};
#endif

//const double pi = 2*acos(0.0);
//const int MxN = 1e9+7;
//1 2 3
//2 4 6
//3 6	9
//22 23 24
//32 33 34
//42 43 44

//2,1
//3 2  2 1
//4 1  3 1
//12 3 11 3 10 3 9 2 82 72  61 51 41

12 22 13 23 14 24 11 21 31 32 33 34

    void
    solve()
{
    //actual code

    int x, y;
    cin >> x >> y;
    vector<vector<int>> ans(45, vector<int>(45));
    ans[2][2] = 1;
    for (int i = 2; i < 41; i++)
    {
        for (int j = 2; j < 41; j++)
        {
            ans[i][j] = (i - 1) * (j - 1);
        }
    }

    cout << ans[x][y] << endl;
    ;
    int a = (x * y) - x;
    int b = (x - 1);

    for (int i = 0; i < ans[x][y]; i++)
    {
        if (i / (y - 1) >= 1 && i % (y - 1) == 0)
            b--;
        cout << a-- << " " << b << endl;
    }
}

int main()
{
    //cout.precision(15);
    FASTER;
    int T;
    cin >> T;
    for (int i = 1; i < T + 1; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }
}