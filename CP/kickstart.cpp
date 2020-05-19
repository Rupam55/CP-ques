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
    
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int count=0,next=0,ans=0;
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
            if(arr[j]==k && count==0){
                count++;
                next=k-1;
            }else if(count!=0){
                if (arr[j] == next){
                    count++;
                    next--;
                    if (count == k){
                        ans++;
                        count = 0;
                    }
                }else if(arr[j]!=next){
                    count=0;
                    next=0;
                    if(arr[j]==k){
                        count++;
                        next=k-1;
                    }
                }
            }
        }
        cout<<"Case #"<<i+1<<": "<<ans<<"\n";
    }
    

    // Time();
}