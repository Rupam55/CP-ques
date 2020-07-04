#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    priority_queue <ll> pq;
    while (n--)
    {
        ll q;
        cin >> q;
        if (q == 1)
        {
            ll a, b;
            cin>>a>>b;
            ll c = a * a + b * b;
            if(pq.size()<k){
                pq.push(c);
            }else{
                ll tp = pq.top();
                if(c<tp)
                {
                    pq.pop();
                    pq.push(c);
                }
            }
        }
        else if(q==2){
            cout<<pq.top()<<"\n";
        }
    }
}