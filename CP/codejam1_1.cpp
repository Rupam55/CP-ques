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

vector <vector<int>> v;
int c=0;

int func(int val,int sum,int i,int j,int arr[][10]){
    if(val==sum){
        for (int i = 0; i < c; i++){
            for (int j = 0; j < 2; j++){
                cout<<v[i][j];
            }cout<<"\n";
        }
        
        return 0;
    }else{
        if(i>=0&&j>=0){
            val = val + arr[i][j];

            vector<int> v1;
            v1.push_back(i);
            v1.push_back(j);
            v.push_back(v1);c++;

            func(val, sum, i - 1, j, arr );
            func(val, sum, i - 1, j-1, arr);
            func(val, sum, i , j + 1, arr);
            func(val, sum, i , j - 1, arr);
            func(val, sum, i + 1, j + 1, arr);
            func(val, sum, i + 1, j, arr);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, t1;
    cin >> t;
    t1 = t;
    while (t--){
        int n;
        cin>>n;
        while(n--){
             int arr[10][10];
            for(int i=0;i<10;i++){
                for(int j=0;j<=i;j++){
                    if(j==0||j==i)
                        arr[i][j]=1;
                    else
                        arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
                }
            }
            int a;
            cin>>a;
            func(0,a,1,1,arr);
        }
        cout<<"Case #"<<t1 - t<<": "<<"\n";
    }

}