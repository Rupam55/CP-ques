#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

bool comp(const pair<ll, ll> &v1, const pair<ll, ll> &v2)
{
    return v1.first < v2.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    for (ll cas = 0; cas < t; cas++)
    {
        ll a, b, n, left, right;
        cin >> n;
        vector<pair<ll, ll>> arr;
        for (ll i = 0; i < n; i++)
        {
            cin >> a >> b;
            arr.push_back({a, b});
        }
        sort(arr.begin(), arr.end(), comp);

        unordered_map<ll, pair<ll, ll>> l;
        unordered_map<ll, pair<ll, ll>> r;
        unordered_map<ll, pair<ll, ll>> ar;

        ll maxi=INT_MIN;

        for (ll i = 0; i < n; i++)
        {
            // arr
            if(l[arr[i].first].first==0 && r[arr[i].first].first==0){
                ar[arr[i].first].first=1;
                ar[arr[i].first].second=0;
                maxi = max( maxi, ar[arr[i].first].second);
            }else if(l[arr[i].first].first==1){
                ar[arr[i].first].first=1;
                ar[arr[i].first].second = max(l[arr[i].first].second,ar[arr[i].first].second);
                maxi = max( maxi, ar[arr[i].first].second);
            }else if(r[arr[i].first].first==1){
                ar[arr[i].first].first=1;
                ar[arr[i].first].second = max(r[arr[i].first].second,ar[arr[i].first].second);
                maxi = max( maxi, ar[arr[i].first].second);
            }
            // right
            right=arr[i].first+arr[i].second;

            r[right].first = 1;

            r[right].second = max(ar[arr[i].first].second + arr[i].second,r[right].second);
            maxi = max( maxi, r[right].second);
            // if(ar[right].first == 1){
            //     r[right].second = max((ar[arr[i].first].second + arr[i].second),r[right].second);
            // }else if(l[right].first == 1){
            //     r[right].second = max((ar[arr[i].first].second + arr[i].second),r[right].second);
            //     ar[arr[i].first].second = max(arr[i].second + l[right].second,ar[arr[i].first].second);
            // }else{
            // }

            // left
            left=arr[i].first-arr[i].second;

            l[left].first = 1;

            l[left].second = max(ar[arr[i].first].second - arr[i].second,l[left].second);
            maxi = max( maxi, l[left].second);

            if(ar[left].first == 1){
                ar[arr[i].first].second = max(arr[i].second + ar[left].second , ar[arr[i].first].second);
                maxi = max( maxi, ar[arr[i].first].second);
            }else if(r[left].first == 1){
                ar[arr[i].first].second = max(arr[i].second + r[left].second , ar[arr[i].first].second);
                maxi = max( maxi, ar[arr[i].first].second);
            }
        }
        // for (auto it : ar)
        // {
        //     cout<<it.first<<" "<<it.second.second<<"\n";
        // }
        // cout<<"\n";
        // for (auto it : l)
        // {
        //     cout<<it.first<<" "<<it.second.second<<"\n";
        // }
        // cout<<"\n";
        // for (auto it : r)
        // {
        //     cout<<it.first<<" "<<it.second.second<<"\n";
        // }
        cout<<"Case #"<<cas+1<<": "<<maxi<<"\n";
    }
}