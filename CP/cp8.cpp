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
    
    int t;
    cin>>t;
    while(t--){
        int n,k,temp,sum=0;
        cin>>n>>k;
        int arr[n],brr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++){
            cin>>brr[i];
        }
        sort(arr,arr+n);
        sort(brr,brr+n);
        for (int i = 0; i < k; i++){
            if(arr[i]<brr[(n-1)-i]){
            temp=arr[i];
            arr[i]=brr[(n-1)-i];
            brr[(n-1)-i]=temp;}
        }
        for (int i = 0; i < n; i++){
            sum+=arr[i];
        }
        cout<<sum<<"\n"; 
    }
}
// ques 2 date 14:5:2020