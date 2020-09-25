#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ld n,W;                      // ld stands for long double  
    cin>>n>>W;
    vector<pair<ld,ld>> arr;     // this is the equivalent of 2d array made in C language
    for(int i=0; i< n; i++){     // pair is used to pair to variables together  
        ld v,w;
        cin>>v>>w;
        arr.push_back({v,w});
    }
    vector<pair<ld,ld>> brr;
    for(int i=0; i<n; i++){
        ld c=arr[i].first/arr[i].second;
        brr.push_back({c,arr[i].second});
    }
    sort(brr.rbegin(),brr.rend());  // this function in c++ sorts given array or
                                    // vector or string in O(nlog(n)).
    ld ans = 0;
    for(int i=0; i<n && W>0; i++){
        // cout<<brr[i].first<<" "<<brr[i].second<<"\n";    
        int mini = min(W,brr[i].second);
        ans += brr[i].first*mini;
        W-=mini;
        brr[i].second-=mini;
    }
    cout<<fixed<<setprecision(4)<<ans;  // precision on float variable is set here.
    return 0;
}