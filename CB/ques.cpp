#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int max = 1000000007;

// void showpq(priority_queue <int> gq) 
// { 
// 	priority_queue <int> g = gq; 
// 	while (!g.empty()) 
// 	{ 
// 		cout << '\t' << g.top(); 
// 		g.pop(); 
// 	} 
// 	cout << '\n'; 
// } 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<ll>v(n);
    vector<ll>::iterator it;
    priority_queue<ll>pq;
    unordered_map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        pq.push(v[i]);
        mp[v[i]]=i;
    }
    for (int i = 0; i < n && k>0; i++)
    {
        ll current = pq.top();
        pq.pop();
        ll pos;
        if(v[i]!=current){
            pos=mp[current]; 
            v[pos]=v[i];
            v[i]=current;
            mp[v[i]]=i;
            mp[v[pos]]=pos;
            k--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
}