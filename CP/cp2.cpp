#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue <int> pq;
    ll n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int j=n;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==j){
            pq.push(arr[i]);
            while(!pq.empty() && pq.top() == j){
                cout<<pq.top()<<" ";
                pq.pop();
                j--;
            }cout<<"\n";
        }else{
            pq.push(arr[i]);
            cout<<"\n";
        }
    }
    
    return 0;
}
// drago
// A. Snacktower
