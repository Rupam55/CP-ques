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

bool isPerfectSquare(long double x)
{
    long double sr = sqrt(x);

    return ((sr - floor(sr)) == 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        long double arr[n][2];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i][0];
            if(i==0){
                arr[i][1]=arr[i][0];
            }else{
                arr[i][1]+=arr[i-1][1];
            }
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            for(int j=i; j<n;j++){
                if (i == 0)
                {
                    if (isPerfectSquare(arr[i][1]))
                    {
                        count++;
                    }
                }
                else
                {
                    if (isPerfectSquare(arr[i][1]-arr[i-1][1]))
                    {
                        count++;
                    }
                }
            }
        }
     
        cout << "Case #" << i + 1 << ": " << count << "\n";
    }

    // Time();
}