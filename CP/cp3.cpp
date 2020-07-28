
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int infi = 10000000;

bool comp( const pair<ll,ll>&v1, const pair<ll,ll>&v2){
    return v1.first<v2.first;
}

int main()
{
    ll t;
    cin >> t;
    for(ll cas = 0; cas < t; cas++)
    {
        ll a,b,n;
        cin>>n;
        vector<pair<ll,ll>>arr;
        for (ll i = 0; i < n; i++)
        {
            cin>>a>>b;
            arr.push_back({a,b});
        }
        sort(arr.begin(),arr.end(),comp);
        // for (ll i = 0; i < n; i++)
        // {
        //     cout<<arr[i].first<<" "<<arr[i].second<<"\n";
        // }
        unordered_map<ll,pair<ll,ll>>lr;
        unordered_map<ll,pair<ll,ll>>l;
        unordered_map<ll,pair<ll,ll>>r;
        unordered_map<ll,pair<ll,ll>>ar;
        for (ll i = 0; i < n; i++)
        {
            lr[arr[i].first].first=arr[i].first-arr[i].second;
            lr[arr[i].first].second=arr[i].first+arr[i].second;

            l[lr[arr[i].first].first].first=arr[i].first;
            r[lr[arr[i].first].second].first=arr[i].first;

            l[lr[arr[i].first].first].second=1;
            r[lr[arr[i].first].second].second=1;

            ar[arr[i].first].first=i;
            ar[arr[i].first].second=arr[i].second;
        }
        // for(auto it:lr){
        //     cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<"\n";
        // }
        // cout<<"\n";
        // for(auto it:l){
        //     cout<<it.first<<" "<<it.second<<"\n";
        // }cout<<"\n";
        // for(auto it:r){
        //     cout<<it.first<<" "<<it.second<<"\n";
        // }cout<<"\n";
        // for(auto it:ar){
        //     cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<"\n";
        // }
        int j=0,i=0,maxi=INT_MIN,dist=0;
        while(j<n){
            i=j;
        while(i<n){
            if(ar[lr[arr[i].first].second].second > 0){
                dist+=arr[i].second;
                cout<<"1"<<"\n";
                maxi=max(dist,maxi);
                i=ar[lr[arr[i].first].second].first;
            }else if(l[lr[arr[i].first].second].second > 0){
                dist+=arr[i].second;
                dist+=ar[l[lr[arr[i].first].second].first].second;
                cout<<"2"<<"\n";
                maxi=max(dist,maxi);
                i=ar[l[lr[arr[i].first].second].first].first +1;
                dist=0;
            }else if(i == n-1){
                dist+=arr[i].second;
                maxi=max(dist,maxi);
                cout<<"4"<<"\n";
                i=n;
            }
            else{
                dist+=arr[i].second;
                maxi=max(dist,maxi);
                cout<<"3"<<"\n";
                dist=0;
                i++;
            }
        }
        j++;
        }
        cout<<"Case #"<<cas+1<<":"<<maxi<<"\n";
    }
}
