//Prafull Varshney
#include<bits/stdc++.h>
#define ll long long int
#define pll pair<ll,ll>
#define ln length
#define vl vector<ll>
#define vll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define pb push_back
#define mp make_pair
#define pq priority_queue
#define it iterator
#define ff first
#define ss second
#define bg begin
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define For(i,n) for(ll i=0;i<n;i++)
#define Forr(i,n) for(ll i=n-1;i>=0;i--)
#define st(v) sort(v.begin(),v.end())
#define mod 1000000007
#define inv(i,n,v) for(ll i=0;i<n;i++)cin>>v[i]
using namespace std;
/*
ll gcd(ll a,ll b)
{
    if(a<=0)
        return b;
    if(b<=0)
        return a;
    if(a>b)
    {
        if(a%b==0)
            return b;
        else
            return gcd(b,a%b);
    }
    else
    {
        if(b%a==0)
            return a;
        else
            return gcd(b%a,a);
    }
}
*/
/*
    vr<ll> p;
    void prime(ll n)
    {
        p.resize(n+1);
        p[0]=1;
        p[1]=1;
        for(ll i=2;i*i<=n;i++)
        {
            for(ll j=2;j*i<=n;j++)
                p[i*j]=1;
        }
    }
*/
 
//map<ll,ll> ans;
/*    ll digit(ll n)
    {
        ll count=0,res=0;
        while(n>0)
        {
            count++;
            n/=10;
        }
        return count;
    }
*/
/*
    ll power(ll x,ll y)
    {
        ll res=1;
        while(y>0)
        {
            if(y%2)
                res=res*x;
            x=x*x;
            y>>=1;
        }
        return res;
    }
*/
/*
	ll multiinverse(ll n)
	{
		return power(n,mod-2)%mod;
	}
*/
/*
vector<bool> visit;
vll adj;
vll wt;
ll n,m;
void dfs(ll cur)
{
    visit[cur]=true;
    for(ll i=0;i<adj[cur].size();i++)
    {
        if(visit[adj[cur][i]]==false)
            dfs(adj[cur][i]);
    }
    return;
}
void read()
{
    cin>>n>>m;
    ll a,b,c;
    wt.clear();
    wt.resize(n);
    for(ll i=0;i<n;i++)
        wt[i].resize(n,INT_MAX);
    visit.clear();
    visit.resize(n,false);
    adj.clear();
    adj.resize(n);
    for(ll i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        a--;
        b--;
        adj[a].pb(b);
        adj[b].pb(a);
        wt[a][b]=min(wt[a][b],c);
        wt[b][a]=wt[a][b];
    }
}
*/
void main2()
{
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    ll ans=0,i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='1')
            break;
    }
    if(s[i]=='\0')
    {
        cout<<"0\n";
        return;
    }
    ans=a;
    ll t=0,d,e,r;
    for(;s[i]!='\0';i++)
    {
        if(s[i]=='0')
            t++;
        else
        {
            if(t!=0)
            {
                ans+=min(t*b,a);
                t=0;
            }
        }
    }
    cout<<ans<<"\n";
   return;
}
int main()
{
   fast;
   ll t=1;
   cin>>t;
   while(t--)
    {
        main2();
    }
    return 0;
}