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
    
    int n,sum=0,count=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
        arr[i][2]=0;
    }
    for (int i = 0; i < n; i++){
        cin >> arr[i][1];
    }
    for (int i = 0; i < n; i++){
        sum+=arr[i][1];
    }while(sum>0){
        int max=INT_MIN,j;
        for(int i=0;i<n;i++){
            if(arr[i][0]>=max&&arr[i][2]==0){
                max=arr[i][0];
                j=i;
            }
        }
        sum=sum-(arr[j][0]);
        arr[j][2]=1;
        count++;
    }
    cout<<count;   
}